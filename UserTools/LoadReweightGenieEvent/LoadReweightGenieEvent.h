#ifndef LoadReweightGenieEvent_H
#define LoadReweightGenieEvent_H

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <utility>
#include <memory>
#include <cmath>
#include <set>
#include <vector>

#include "Tool.h"
#include "GenieInfo.h"
#include "CLHEP/Random/RandGaussQ.h"
#include "CLHEP/Random/JamesRandom.h"
#include "Framework/Conventions/KineVar.h"
#include "Framework/EventGen/EventRecord.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Interaction/Kinematics.h"
//#include "Framework/Messenger/Messenger.h"
#include "Framework/Utils/AppInit.h"
#include <Tools/Flux/GSimpleNtpFlux.h>
#include <Tools/Flux/GNuMIFlux.h>
#include <Framework/GHEP/GHepUtils.h>               // neut reaction codes
#include <Framework/ParticleData/PDGLibrary.h>
#include <Framework/ParticleData/PDGCodes.h>
#include <Framework/Ntuple/NtpMCEventRecord.h>
#include <Framework/Ntuple/NtpMCTreeHeader.h>
#include <Framework/Conventions/Constants.h>
#include <Framework/GHEP/GHepParticle.h>
#include <Framework/GHEP/GHepStatus.h>
#include <TParticlePDG.h>

#include "RwFramework/GSystSet.h"
#include "RwFramework/GSyst.h"
#include "RwFramework/GReWeight.h"
#include "RwCalculators/GReWeightNuXSecNCEL.h"
#include "RwCalculators/GReWeightNuXSecCCQE.h"
#include "RwCalculators/GReWeightNuXSecCCRES.h"
#include "RwCalculators/GReWeightNuXSecCOH.h"
#include "RwCalculators/GReWeightNonResonanceBkg.h"
#include "RwCalculators/GReWeightFGM.h"
#include "RwCalculators/GReWeightDISNuclMod.h"
#include "RwCalculators/GReWeightResonanceDecay.h"
#include "RwCalculators/GReWeightFZone.h"
#include "RwCalculators/GReWeightINuke.h"
#include "RwCalculators/GReWeightAGKY.h"
#include "RwCalculators/GReWeightNuXSecCCQEaxial.h"
#include "RwCalculators/GReWeightNuXSecCCQEvec.h"
#include "RwCalculators/GReWeightNuXSecNCRES.h"
#include "RwCalculators/GReWeightNuXSecDIS.h"
#include "RwCalculators/GReWeightINukeParams.h"
#include "RwCalculators/GReWeightNuXSecNC.h"
#include "RwCalculators/GReWeightXSecEmpiricalMEC.h"
//UBoone Patch
#include "RwCalculators/GReWeightXSecMEC.h"
#include "RwCalculators/GReWeightDeltaradAngle.h"
#include "RwCalculators/GReWeightNuXSecCOHuB.h"
#include "RwCalculators/GReWeightRESBugFix.h"

#include <Tools/Flux/GSimpleNtpFlux.h>
#include <Tools/Flux/GNuMIFlux.h>
#include <GHEP/GHepUtils.h>               // neut reaction codes
#include <ParticleData/PDGLibrary.h>
#include <ParticleData/PDGCodes.h>
#include <Ntuple/NtpMCEventRecord.h>
#include <Conventions/Constants.h>
#include <GHEP/GHepParticle.h>
#include <GHEP/GHepStatus.h>
#include <EventGen/EventRecord.h>
#include <TParticlePDG.h>
#include <Interaction/Interaction.h>
#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TVector3.h"
#include "TLorentzVector.h"

#include "MRDspecs.hh"
#include "MCXSEventWeight.h"

class LoadReweightGenieEvent: public Tool {
	
	public:
	
	LoadReweightGenieEvent();
	bool Initialise(std::string configfile,DataModel &data);
	bool Execute();
	bool Finalise();
	bool valid_knob_name( const std::string& knob_name, genie::rew::GSyst_t& knob );
	std::map< std::string, int > CheckForIncompatibleSystematics(const std::vector<genie::rew::GSyst_t>& knob_vec);
	void SetupWeightCalculators(genie::rew::GReWeight& rw, const std::map<std::string, int>& modes_to_use);

	// verbosity levels: if 'verbosity' < this level, the message type will be logged.
	int verbosity;
	int v_error=0;
	int v_warning=1;
	int v_message=2;
	int v_debug=3;
	std::string logmessage;
	int get_ok;
	
	private:
	
	// function to load the branch addresses
	void SetBranchAddresses();

	// function to fill the info into the handy genieinfostruct
	void GetGenieEntryInfo(genie::EventRecord* gevtRec, genie::Interaction* genieint,
	  GenieInfo& thegenieinfo, bool printneutrinoevent=false);
	// type conversion functions:
	std::map<int,std::string> pdgcodetoname;
	std::map<int,std::string> decaymap;
	std::map<int,std::string> gnumicodetoname;
	std::map<int,std::string> mediummap;
	std::map<int,std::string>* GenerateGnumiMap();
	std::map<int,std::string>* GeneratePdgMap();
	std::map<int,std::string>* GenerateDecayMap();
	std::map<int,std::string>* GenerateMediumMap();
	std::string GnumiToString(int code);
	std::string PdgToString(int code);
	std::string DecayTypeToString(int code);
	std::string MediumToString(int code);
	
	BoostStore* geniestore = nullptr;
	int fluxstage;
	std::string filedir, filepattern;
	bool loadwcsimsource;
	TChain* flux = nullptr;
	TFile* curf = nullptr;       // keep track of file changes
	TFile* curflast = nullptr;
	genie::NtpMCEventRecord* genieintx = nullptr; // = new genie::NtpMCEventRecord;
	genie::NtpMCTreeHeader* geniehdr = nullptr;
	// for fluxver 0 files
	genie::flux::GNuMIFluxPassThroughInfo* gnumipassthruentry  = nullptr;
	// for fluxver 1 files
	genie::flux::GSimpleNtpEntry* gsimpleentry = nullptr;
	genie::flux::GSimpleNtpAux* gsimpleauxinfo = nullptr;
	genie::flux::GSimpleNtpNuMI* gsimplenumientry = nullptr;

	//Reweight variables
	std::string weight_options;
	std::string sample;
	std::string fGenieModuleWeight;
	vector<string> weight_names;
	vector<vector< genie::rew::GReWeight >> reweightVector;
	
	// genie file variables
	int fluxver;                         // 0 = old flux, 1 = new flux
	std::string currentfilestring;
	unsigned long local_entry=0;           // 
	int tchainentrynum=0;         // 
	bool manualmatch=0;			//to be used when GENIE information is not stored properly in file
	int fileevents=0;
	int on_grid;

	// common input/output variables to both Robert/Zarko filesets
	int parentpdg;
	std::string parenttypestring;
	int parentdecaymode;                 // some arbitrary number that maps to a decay mode string.
	std::string parentdecaystring;       // descriptive string. Should we store a map of the translation?
	float parentdecayvtx_x, parentdecayvtx_y, parentdecayvtx_z;
	Position parentdecayvtx;
	float parentdecaymom_x, parentdecaymom_y, parentdecaymom_z;
	Direction parentdecaymom;
	float parentprodmom_x, parentprodmom_y, parentprodmom_z;
	Direction parentprodmom;
	int parentprodmedium;                // they're all 0
	std::string parentprodmediumstring;  // do we even have this mapping? --> There seems to be a mapping here: https://minos-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=6316&filename=flugg_doc.pdf&version=10
	int parentpdgattgtexit;
	std::string parenttypestringattgtexit;
	Direction parenttgtexitmom;
	float parenttgtexitmom_x, parenttgtexitmom_y, parenttgtexitmom_z;
	int pcodes;			// Needed to evaluate whether the particle codes are stored in GEANT format or in PDG format

        // Additional zarko-only information, needed for flux systematic reweighting
        int fluxrun;
        int fluxentryno;
        int fluxevtno;
        int fluxntype;
        double fluxnimpwt;
        double fluxnenergyn;
        double fluxnenergyf;
	
	// store the neutrino info from gntp files
	// a load of variables to specify interaction type
	bool IsQuasiElastic=false;
	bool IsResonant=false;
	bool IsDeepInelastic=false;
	bool IsCoherent=false;
	bool IsDiffractive=false;
	bool IsInverseMuDecay=false;
	bool IsIMDAnnihilation=false;
	bool IsSingleKaon=false;
	bool IsNuElectronElastic=false;
	bool IsEM=false;
	bool IsWeakCC=false;
	bool IsWeakNC=false;
	bool IsMEC=false;
	std::string interactiontypestring="";
	int neutcode=-1;
	// ok, moving on
	double nuIntxVtx_X; // cm
	double nuIntxVtx_Y; // cm
	double nuIntxVtx_Z; // cm
	double nuIntxVtx_T; // ns
	bool isintank=false;
	bool isinfiducialvol=false;
	double eventq2=-1;
	double eventEnu=-1;
	Direction eventPnu;
	int neutrinopdg=-1;
	double muonenergy=-1;
	double muonangle=-1;
	std::string fsleptonname; // assumed to be muon, but we should confirm
        double fsleptonenergy;
        int fsleptonpdg;
        double fsleptonm;
        Direction fsleptonmomentum;
        Direction fsleptonmomentumdir;
        Position fsleptonvtx; // cm
        double fsleptont;     // ns
	// these may not be properly copied... --> temp fix applied that seems to be working
        int numfsprotons;
        int numfsneutrons;
        int numfspi0;
        int numfspiplus;
        int numfspipluscher;  // reach Cherenkov threshold
        int numfspiminus;
        int numfspiminuscher; // reach Cherenkov threshold
        int numfskplus;
        int numfskpluscher;   // reach Cherenkov threshold
        int numfskminus;
        int numfskminuscher;  // reach Cherenkov threshold
	
};

#endif
