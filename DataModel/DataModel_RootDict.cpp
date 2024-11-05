// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME DataModel_RootDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "ADCPulse.h"
#include "ANNIEGeometry.h"
#include "ANNIERecoObjectTable.h"
#include "ANNIEalgorithms.h"
#include "ANNIEconstants.h"
#include "BeamDataPoint.h"
#include "BeamStatus.h"
#include "BeamStatusClass.h"
#include "CalibratedADCWaveform.h"
#include "CardData.h"
#include "Channel.h"
#include "ChannelKey.h"
#include "DataModel.h"
#include "Detector.h"
#include "Direction.h"
#include "ExampleRoot.h"
#include "FoMCalculator.h"
#include "GenieInfo.h"
#include "Geometry.h"
#include "HeftyInfo.h"
#include "Hit.h"
#include "LAPPD.h"
#include "LAPPDHit.h"
#include "LAPPDPulse.h"
#include "MRDOut.h"
#include "MinibufferLabel.h"
#include "MinuitOptimizer.h"
#include "NnlsSolution.h"
#include "Paddle.h"
#include "Parameters.h"
#include "Particle.h"
#include "Position.h"
#include "PsecData.h"
#include "RecoCluster.h"
#include "RecoClusterDigit.h"
#include "RecoDigit.h"
#include "RecoRing.h"
#include "RecoVertex.h"
#include "RunTypeLabel.h"
#include "SlowControlMonitor.h"
#include "TimeClass.h"
#include "TrigTypeLabel.h"
#include "TriggerClass.h"
#include "TriggerData.h"
#include "VertexGeometry.h"
#include "WaterModel.h"
#include "Waveform.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace anniealgorithms {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *anniealgorithms_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("anniealgorithms", 0 /*version*/, "ANNIEalgorithms.h", 49,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &anniealgorithms_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *anniealgorithms_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace boost {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *boost_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("boost", 0 /*version*/, "boost/config/detail/suffix.hpp", 484,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &boost_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *boost_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace boost {
   namespace serialization {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *boostcLcLserialization_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("boost::serialization", 0 /*version*/, "boost/serialization/throw_exception.hpp", 25,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &boostcLcLserialization_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *boostcLcLserialization_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *ChannelKey_Dictionary();
   static void ChannelKey_TClassManip(TClass*);
   static void *new_ChannelKey(void *p = 0);
   static void *newArray_ChannelKey(Long_t size, void *p);
   static void delete_ChannelKey(void *p);
   static void deleteArray_ChannelKey(void *p);
   static void destruct_ChannelKey(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChannelKey*)
   {
      ::ChannelKey *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChannelKey));
      static ::ROOT::TGenericClassInfo 
         instance("ChannelKey", "ChannelKey.h", 12,
                  typeid(::ChannelKey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChannelKey_Dictionary, isa_proxy, 4,
                  sizeof(::ChannelKey) );
      instance.SetNew(&new_ChannelKey);
      instance.SetNewArray(&newArray_ChannelKey);
      instance.SetDelete(&delete_ChannelKey);
      instance.SetDeleteArray(&deleteArray_ChannelKey);
      instance.SetDestructor(&destruct_ChannelKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChannelKey*)
   {
      return GenerateInitInstanceLocal((::ChannelKey*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChannelKey*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChannelKey_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChannelKey*)0x0)->GetClass();
      ChannelKey_TClassManip(theClass);
   return theClass;
   }

   static void ChannelKey_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","ChannelKey.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Hit_Dictionary();
   static void Hit_TClassManip(TClass*);
   static void *new_Hit(void *p = 0);
   static void *newArray_Hit(Long_t size, void *p);
   static void delete_Hit(void *p);
   static void deleteArray_Hit(void *p);
   static void destruct_Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Hit*)
   {
      ::Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Hit));
      static ::ROOT::TGenericClassInfo 
         instance("Hit", "Hit.h", 11,
                  typeid(::Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Hit_Dictionary, isa_proxy, 4,
                  sizeof(::Hit) );
      instance.SetNew(&new_Hit);
      instance.SetNewArray(&newArray_Hit);
      instance.SetDelete(&delete_Hit);
      instance.SetDeleteArray(&deleteArray_Hit);
      instance.SetDestructor(&destruct_Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Hit*)
   {
      return GenerateInitInstanceLocal((::Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Hit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Hit*)0x0)->GetClass();
      Hit_TClassManip(theClass);
   return theClass;
   }

   static void Hit_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Hit.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MCHit_Dictionary();
   static void MCHit_TClassManip(TClass*);
   static void *new_MCHit(void *p = 0);
   static void *newArray_MCHit(Long_t size, void *p);
   static void delete_MCHit(void *p);
   static void deleteArray_MCHit(void *p);
   static void destruct_MCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MCHit*)
   {
      ::MCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MCHit));
      static ::ROOT::TGenericClassInfo 
         instance("MCHit", "Hit.h", 51,
                  typeid(::MCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MCHit_Dictionary, isa_proxy, 4,
                  sizeof(::MCHit) );
      instance.SetNew(&new_MCHit);
      instance.SetNewArray(&newArray_MCHit);
      instance.SetDelete(&delete_MCHit);
      instance.SetDeleteArray(&deleteArray_MCHit);
      instance.SetDestructor(&destruct_MCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MCHit*)
   {
      return GenerateInitInstanceLocal((::MCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MCHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MCHit*)0x0)->GetClass();
      MCHit_TClassManip(theClass);
   return theClass;
   }

   static void MCHit_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Hit.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ADCPulse_Dictionary();
   static void ADCPulse_TClassManip(TClass*);
   static void *new_ADCPulse(void *p = 0);
   static void *newArray_ADCPulse(Long_t size, void *p);
   static void delete_ADCPulse(void *p);
   static void deleteArray_ADCPulse(void *p);
   static void destruct_ADCPulse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ADCPulse*)
   {
      ::ADCPulse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ADCPulse));
      static ::ROOT::TGenericClassInfo 
         instance("ADCPulse", "ADCPulse.h", 13,
                  typeid(::ADCPulse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ADCPulse_Dictionary, isa_proxy, 4,
                  sizeof(::ADCPulse) );
      instance.SetNew(&new_ADCPulse);
      instance.SetNewArray(&newArray_ADCPulse);
      instance.SetDelete(&delete_ADCPulse);
      instance.SetDeleteArray(&deleteArray_ADCPulse);
      instance.SetDestructor(&destruct_ADCPulse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ADCPulse*)
   {
      return GenerateInitInstanceLocal((::ADCPulse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ADCPulse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ADCPulse_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ADCPulse*)0x0)->GetClass();
      ADCPulse_TClassManip(theClass);
   return theClass;
   }

   static void ADCPulse_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","ADCPulse.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ANNIEGeometry_Dictionary();
   static void ANNIEGeometry_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ANNIEGeometry*)
   {
      ::ANNIEGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ANNIEGeometry));
      static ::ROOT::TGenericClassInfo 
         instance("ANNIEGeometry", "ANNIEGeometry.h", 4,
                  typeid(::ANNIEGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ANNIEGeometry_Dictionary, isa_proxy, 4,
                  sizeof(::ANNIEGeometry) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ANNIEGeometry*)
   {
      return GenerateInitInstanceLocal((::ANNIEGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ANNIEGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ANNIEGeometry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ANNIEGeometry*)0x0)->GetClass();
      ANNIEGeometry_TClassManip(theClass);
   return theClass;
   }

   static void ANNIEGeometry_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","ANNIEGeometry.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ANNIERecoObjectTable_Dictionary();
   static void ANNIERecoObjectTable_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ANNIERecoObjectTable*)
   {
      ::ANNIERecoObjectTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ANNIERecoObjectTable));
      static ::ROOT::TGenericClassInfo 
         instance("ANNIERecoObjectTable", "ANNIERecoObjectTable.h", 6,
                  typeid(::ANNIERecoObjectTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ANNIERecoObjectTable_Dictionary, isa_proxy, 4,
                  sizeof(::ANNIERecoObjectTable) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ANNIERecoObjectTable*)
   {
      return GenerateInitInstanceLocal((::ANNIERecoObjectTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ANNIERecoObjectTable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ANNIERecoObjectTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ANNIERecoObjectTable*)0x0)->GetClass();
      ANNIERecoObjectTable_TClassManip(theClass);
   return theClass;
   }

   static void ANNIERecoObjectTable_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","ANNIERecoObjectTable.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BeamDataPoint_Dictionary();
   static void BeamDataPoint_TClassManip(TClass*);
   static void *new_BeamDataPoint(void *p = 0);
   static void *newArray_BeamDataPoint(Long_t size, void *p);
   static void delete_BeamDataPoint(void *p);
   static void deleteArray_BeamDataPoint(void *p);
   static void destruct_BeamDataPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BeamDataPoint*)
   {
      ::BeamDataPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BeamDataPoint));
      static ::ROOT::TGenericClassInfo 
         instance("BeamDataPoint", "BeamDataPoint.h", 17,
                  typeid(::BeamDataPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BeamDataPoint_Dictionary, isa_proxy, 4,
                  sizeof(::BeamDataPoint) );
      instance.SetNew(&new_BeamDataPoint);
      instance.SetNewArray(&newArray_BeamDataPoint);
      instance.SetDelete(&delete_BeamDataPoint);
      instance.SetDeleteArray(&deleteArray_BeamDataPoint);
      instance.SetDestructor(&destruct_BeamDataPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BeamDataPoint*)
   {
      return GenerateInitInstanceLocal((::BeamDataPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BeamDataPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BeamDataPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BeamDataPoint*)0x0)->GetClass();
      BeamDataPoint_TClassManip(theClass);
   return theClass;
   }

   static void BeamDataPoint_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","BeamDataPoint.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *boostcLcLserializationcLcLversionlEBeamDataPointgR_Dictionary();
   static void boostcLcLserializationcLcLversionlEBeamDataPointgR_TClassManip(TClass*);
   static void *new_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p = 0);
   static void *newArray_boostcLcLserializationcLcLversionlEBeamDataPointgR(Long_t size, void *p);
   static void delete_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p);
   static void deleteArray_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p);
   static void destruct_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::boost::serialization::version<BeamDataPoint>*)
   {
      ::boost::serialization::version<BeamDataPoint> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::boost::serialization::version<BeamDataPoint>));
      static ::ROOT::TGenericClassInfo 
         instance("boost::serialization::version<BeamDataPoint>", "BeamDataPoint.h", 48,
                  typeid(::boost::serialization::version<BeamDataPoint>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &boostcLcLserializationcLcLversionlEBeamDataPointgR_Dictionary, isa_proxy, 4,
                  sizeof(::boost::serialization::version<BeamDataPoint>) );
      instance.SetNew(&new_boostcLcLserializationcLcLversionlEBeamDataPointgR);
      instance.SetNewArray(&newArray_boostcLcLserializationcLcLversionlEBeamDataPointgR);
      instance.SetDelete(&delete_boostcLcLserializationcLcLversionlEBeamDataPointgR);
      instance.SetDeleteArray(&deleteArray_boostcLcLserializationcLcLversionlEBeamDataPointgR);
      instance.SetDestructor(&destruct_boostcLcLserializationcLcLversionlEBeamDataPointgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::boost::serialization::version<BeamDataPoint>*)
   {
      return GenerateInitInstanceLocal((::boost::serialization::version<BeamDataPoint>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::boost::serialization::version<BeamDataPoint>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *boostcLcLserializationcLcLversionlEBeamDataPointgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::boost::serialization::version<BeamDataPoint>*)0x0)->GetClass();
      boostcLcLserializationcLcLversionlEBeamDataPointgR_TClassManip(theClass);
   return theClass;
   }

   static void boostcLcLserializationcLcLversionlEBeamDataPointgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","BeamDataPoint.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TimeClass_Dictionary();
   static void TimeClass_TClassManip(TClass*);
   static void *new_TimeClass(void *p = 0);
   static void *newArray_TimeClass(Long_t size, void *p);
   static void delete_TimeClass(void *p);
   static void deleteArray_TimeClass(void *p);
   static void destruct_TimeClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TimeClass*)
   {
      ::TimeClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TimeClass));
      static ::ROOT::TGenericClassInfo 
         instance("TimeClass", "TimeClass.h", 15,
                  typeid(::TimeClass), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TimeClass_Dictionary, isa_proxy, 4,
                  sizeof(::TimeClass) );
      instance.SetNew(&new_TimeClass);
      instance.SetNewArray(&newArray_TimeClass);
      instance.SetDelete(&delete_TimeClass);
      instance.SetDeleteArray(&deleteArray_TimeClass);
      instance.SetDestructor(&destruct_TimeClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TimeClass*)
   {
      return GenerateInitInstanceLocal((::TimeClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TimeClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TimeClass_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TimeClass*)0x0)->GetClass();
      TimeClass_TClassManip(theClass);
   return theClass;
   }

   static void TimeClass_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","TimeClass.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BeamStatus_Dictionary();
   static void BeamStatus_TClassManip(TClass*);
   static void *new_BeamStatus(void *p = 0);
   static void *newArray_BeamStatus(Long_t size, void *p);
   static void delete_BeamStatus(void *p);
   static void deleteArray_BeamStatus(void *p);
   static void destruct_BeamStatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BeamStatus*)
   {
      ::BeamStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BeamStatus));
      static ::ROOT::TGenericClassInfo 
         instance("BeamStatus", "BeamStatus.h", 49,
                  typeid(::BeamStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BeamStatus_Dictionary, isa_proxy, 4,
                  sizeof(::BeamStatus) );
      instance.SetNew(&new_BeamStatus);
      instance.SetNewArray(&newArray_BeamStatus);
      instance.SetDelete(&delete_BeamStatus);
      instance.SetDeleteArray(&deleteArray_BeamStatus);
      instance.SetDestructor(&destruct_BeamStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BeamStatus*)
   {
      return GenerateInitInstanceLocal((::BeamStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BeamStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BeamStatus_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BeamStatus*)0x0)->GetClass();
      BeamStatus_TClassManip(theClass);
   return theClass;
   }

   static void BeamStatus_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","BeamStatus.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BeamStatusClass_Dictionary();
   static void BeamStatusClass_TClassManip(TClass*);
   static void *new_BeamStatusClass(void *p = 0);
   static void *newArray_BeamStatusClass(Long_t size, void *p);
   static void delete_BeamStatusClass(void *p);
   static void deleteArray_BeamStatusClass(void *p);
   static void destruct_BeamStatusClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BeamStatusClass*)
   {
      ::BeamStatusClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BeamStatusClass));
      static ::ROOT::TGenericClassInfo 
         instance("BeamStatusClass", "BeamStatusClass.h", 10,
                  typeid(::BeamStatusClass), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BeamStatusClass_Dictionary, isa_proxy, 4,
                  sizeof(::BeamStatusClass) );
      instance.SetNew(&new_BeamStatusClass);
      instance.SetNewArray(&newArray_BeamStatusClass);
      instance.SetDelete(&delete_BeamStatusClass);
      instance.SetDeleteArray(&deleteArray_BeamStatusClass);
      instance.SetDestructor(&destruct_BeamStatusClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BeamStatusClass*)
   {
      return GenerateInitInstanceLocal((::BeamStatusClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BeamStatusClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BeamStatusClass_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BeamStatusClass*)0x0)->GetClass();
      BeamStatusClass_TClassManip(theClass);
   return theClass;
   }

   static void BeamStatusClass_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","BeamStatusClass.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WaveformlEdoublegR_Dictionary();
   static void WaveformlEdoublegR_TClassManip(TClass*);
   static void *new_WaveformlEdoublegR(void *p = 0);
   static void *newArray_WaveformlEdoublegR(Long_t size, void *p);
   static void delete_WaveformlEdoublegR(void *p);
   static void deleteArray_WaveformlEdoublegR(void *p);
   static void destruct_WaveformlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Waveform<double>*)
   {
      ::Waveform<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Waveform<double>));
      static ::ROOT::TGenericClassInfo 
         instance("Waveform<double>", "Waveform.h", 11,
                  typeid(::Waveform<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WaveformlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::Waveform<double>) );
      instance.SetNew(&new_WaveformlEdoublegR);
      instance.SetNewArray(&newArray_WaveformlEdoublegR);
      instance.SetDelete(&delete_WaveformlEdoublegR);
      instance.SetDeleteArray(&deleteArray_WaveformlEdoublegR);
      instance.SetDestructor(&destruct_WaveformlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Waveform<double>*)
   {
      return GenerateInitInstanceLocal((::Waveform<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Waveform<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WaveformlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Waveform<double>*)0x0)->GetClass();
      WaveformlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void WaveformlEdoublegR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Waveform.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CardData_Dictionary();
   static void CardData_TClassManip(TClass*);
   static void *new_CardData(void *p = 0);
   static void *newArray_CardData(Long_t size, void *p);
   static void delete_CardData(void *p);
   static void deleteArray_CardData(void *p);
   static void destruct_CardData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CardData*)
   {
      ::CardData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CardData));
      static ::ROOT::TGenericClassInfo 
         instance("CardData", "CardData.h", 12,
                  typeid(::CardData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CardData_Dictionary, isa_proxy, 4,
                  sizeof(::CardData) );
      instance.SetNew(&new_CardData);
      instance.SetNewArray(&newArray_CardData);
      instance.SetDelete(&delete_CardData);
      instance.SetDeleteArray(&deleteArray_CardData);
      instance.SetDestructor(&destruct_CardData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CardData*)
   {
      return GenerateInitInstanceLocal((::CardData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CardData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CardData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CardData*)0x0)->GetClass();
      CardData_TClassManip(theClass);
   return theClass;
   }

   static void CardData_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","CardData.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Position_Dictionary();
   static void Position_TClassManip(TClass*);
   static void *new_Position(void *p = 0);
   static void *newArray_Position(Long_t size, void *p);
   static void delete_Position(void *p);
   static void deleteArray_Position(void *p);
   static void destruct_Position(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Position*)
   {
      ::Position *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Position));
      static ::ROOT::TGenericClassInfo 
         instance("Position", "Position.h", 15,
                  typeid(::Position), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Position_Dictionary, isa_proxy, 4,
                  sizeof(::Position) );
      instance.SetNew(&new_Position);
      instance.SetNewArray(&newArray_Position);
      instance.SetDelete(&delete_Position);
      instance.SetDeleteArray(&deleteArray_Position);
      instance.SetDestructor(&destruct_Position);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Position*)
   {
      return GenerateInitInstanceLocal((::Position*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Position*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Position_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Position*)0x0)->GetClass();
      Position_TClassManip(theClass);
   return theClass;
   }

   static void Position_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Position.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *FourVector_Dictionary();
   static void FourVector_TClassManip(TClass*);
   static void *new_FourVector(void *p = 0);
   static void *newArray_FourVector(Long_t size, void *p);
   static void delete_FourVector(void *p);
   static void deleteArray_FourVector(void *p);
   static void destruct_FourVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FourVector*)
   {
      ::FourVector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::FourVector));
      static ::ROOT::TGenericClassInfo 
         instance("FourVector", "Position.h", 181,
                  typeid(::FourVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FourVector_Dictionary, isa_proxy, 4,
                  sizeof(::FourVector) );
      instance.SetNew(&new_FourVector);
      instance.SetNewArray(&newArray_FourVector);
      instance.SetDelete(&delete_FourVector);
      instance.SetDeleteArray(&deleteArray_FourVector);
      instance.SetDestructor(&destruct_FourVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FourVector*)
   {
      return GenerateInitInstanceLocal((::FourVector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FourVector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FourVector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::FourVector*)0x0)->GetClass();
      FourVector_TClassManip(theClass);
   return theClass;
   }

   static void FourVector_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Position.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Channel_Dictionary();
   static void Channel_TClassManip(TClass*);
   static void *new_Channel(void *p = 0);
   static void *newArray_Channel(Long_t size, void *p);
   static void delete_Channel(void *p);
   static void deleteArray_Channel(void *p);
   static void destruct_Channel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Channel*)
   {
      ::Channel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Channel));
      static ::ROOT::TGenericClassInfo 
         instance("Channel", "Channel.h", 10,
                  typeid(::Channel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Channel_Dictionary, isa_proxy, 4,
                  sizeof(::Channel) );
      instance.SetNew(&new_Channel);
      instance.SetNewArray(&newArray_Channel);
      instance.SetDelete(&delete_Channel);
      instance.SetDeleteArray(&deleteArray_Channel);
      instance.SetDestructor(&destruct_Channel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Channel*)
   {
      return GenerateInitInstanceLocal((::Channel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Channel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Channel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Channel*)0x0)->GetClass();
      Channel_TClassManip(theClass);
   return theClass;
   }

   static void Channel_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Channel.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *LAPPD_Dictionary();
   static void LAPPD_TClassManip(TClass*);
   static void *new_LAPPD(void *p = 0);
   static void *newArray_LAPPD(Long_t size, void *p);
   static void delete_LAPPD(void *p);
   static void deleteArray_LAPPD(void *p);
   static void destruct_LAPPD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LAPPD*)
   {
      ::LAPPD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LAPPD));
      static ::ROOT::TGenericClassInfo 
         instance("LAPPD", "LAPPD.h", 7,
                  typeid(::LAPPD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LAPPD_Dictionary, isa_proxy, 4,
                  sizeof(::LAPPD) );
      instance.SetNew(&new_LAPPD);
      instance.SetNewArray(&newArray_LAPPD);
      instance.SetDelete(&delete_LAPPD);
      instance.SetDeleteArray(&deleteArray_LAPPD);
      instance.SetDestructor(&destruct_LAPPD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LAPPD*)
   {
      return GenerateInitInstanceLocal((::LAPPD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LAPPD*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LAPPD_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LAPPD*)0x0)->GetClass();
      LAPPD_TClassManip(theClass);
   return theClass;
   }

   static void LAPPD_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","LAPPD.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Direction_Dictionary();
   static void Direction_TClassManip(TClass*);
   static void *new_Direction(void *p = 0);
   static void *newArray_Direction(Long_t size, void *p);
   static void delete_Direction(void *p);
   static void deleteArray_Direction(void *p);
   static void destruct_Direction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Direction*)
   {
      ::Direction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Direction));
      static ::ROOT::TGenericClassInfo 
         instance("Direction", "Direction.h", 12,
                  typeid(::Direction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Direction_Dictionary, isa_proxy, 4,
                  sizeof(::Direction) );
      instance.SetNew(&new_Direction);
      instance.SetNewArray(&newArray_Direction);
      instance.SetDelete(&delete_Direction);
      instance.SetDeleteArray(&deleteArray_Direction);
      instance.SetDestructor(&destruct_Direction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Direction*)
   {
      return GenerateInitInstanceLocal((::Direction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Direction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Direction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Direction*)0x0)->GetClass();
      Direction_TClassManip(theClass);
   return theClass;
   }

   static void Direction_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Direction.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Detector_Dictionary();
   static void Detector_TClassManip(TClass*);
   static void *new_Detector(void *p = 0);
   static void *newArray_Detector(Long_t size, void *p);
   static void delete_Detector(void *p);
   static void deleteArray_Detector(void *p);
   static void destruct_Detector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Detector*)
   {
      ::Detector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Detector));
      static ::ROOT::TGenericClassInfo 
         instance("Detector", "Detector.h", 16,
                  typeid(::Detector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Detector_Dictionary, isa_proxy, 4,
                  sizeof(::Detector) );
      instance.SetNew(&new_Detector);
      instance.SetNewArray(&newArray_Detector);
      instance.SetDelete(&delete_Detector);
      instance.SetDeleteArray(&deleteArray_Detector);
      instance.SetDestructor(&destruct_Detector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Detector*)
   {
      return GenerateInitInstanceLocal((::Detector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Detector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Detector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Detector*)0x0)->GetClass();
      Detector_TClassManip(theClass);
   return theClass;
   }

   static void Detector_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Detector.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Paddle_Dictionary();
   static void Paddle_TClassManip(TClass*);
   static void *new_Paddle(void *p = 0);
   static void *newArray_Paddle(Long_t size, void *p);
   static void delete_Paddle(void *p);
   static void deleteArray_Paddle(void *p);
   static void destruct_Paddle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Paddle*)
   {
      ::Paddle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Paddle));
      static ::ROOT::TGenericClassInfo 
         instance("Paddle", "Paddle.h", 12,
                  typeid(::Paddle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Paddle_Dictionary, isa_proxy, 4,
                  sizeof(::Paddle) );
      instance.SetNew(&new_Paddle);
      instance.SetNewArray(&newArray_Paddle);
      instance.SetDelete(&delete_Paddle);
      instance.SetDeleteArray(&deleteArray_Paddle);
      instance.SetDestructor(&destruct_Paddle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Paddle*)
   {
      return GenerateInitInstanceLocal((::Paddle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Paddle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Paddle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Paddle*)0x0)->GetClass();
      Paddle_TClassManip(theClass);
   return theClass;
   }

   static void Paddle_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Paddle.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Particle_Dictionary();
   static void Particle_TClassManip(TClass*);
   static void *new_Particle(void *p = 0);
   static void *newArray_Particle(Long_t size, void *p);
   static void delete_Particle(void *p);
   static void deleteArray_Particle(void *p);
   static void destruct_Particle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Particle*)
   {
      ::Particle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Particle));
      static ::ROOT::TGenericClassInfo 
         instance("Particle", "Particle.h", 18,
                  typeid(::Particle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Particle_Dictionary, isa_proxy, 4,
                  sizeof(::Particle) );
      instance.SetNew(&new_Particle);
      instance.SetNewArray(&newArray_Particle);
      instance.SetDelete(&delete_Particle);
      instance.SetDeleteArray(&deleteArray_Particle);
      instance.SetDestructor(&destruct_Particle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Particle*)
   {
      return GenerateInitInstanceLocal((::Particle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Particle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Particle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Particle*)0x0)->GetClass();
      Particle_TClassManip(theClass);
   return theClass;
   }

   static void Particle_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Particle.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MCParticle_Dictionary();
   static void MCParticle_TClassManip(TClass*);
   static void *new_MCParticle(void *p = 0);
   static void *newArray_MCParticle(Long_t size, void *p);
   static void delete_MCParticle(void *p);
   static void deleteArray_MCParticle(void *p);
   static void destruct_MCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MCParticle*)
   {
      ::MCParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MCParticle));
      static ::ROOT::TGenericClassInfo 
         instance("MCParticle", "Particle.h", 133,
                  typeid(::MCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MCParticle_Dictionary, isa_proxy, 4,
                  sizeof(::MCParticle) );
      instance.SetNew(&new_MCParticle);
      instance.SetNewArray(&newArray_MCParticle);
      instance.SetDelete(&delete_MCParticle);
      instance.SetDeleteArray(&deleteArray_MCParticle);
      instance.SetDestructor(&destruct_MCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MCParticle*)
   {
      return GenerateInitInstanceLocal((::MCParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MCParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MCParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MCParticle*)0x0)->GetClass();
      MCParticle_TClassManip(theClass);
   return theClass;
   }

   static void MCParticle_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Particle.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Geometry_Dictionary();
   static void Geometry_TClassManip(TClass*);
   static void *new_Geometry(void *p = 0);
   static void *newArray_Geometry(Long_t size, void *p);
   static void delete_Geometry(void *p);
   static void deleteArray_Geometry(void *p);
   static void destruct_Geometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Geometry*)
   {
      ::Geometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Geometry));
      static ::ROOT::TGenericClassInfo 
         instance("Geometry", "Geometry.h", 15,
                  typeid(::Geometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Geometry_Dictionary, isa_proxy, 4,
                  sizeof(::Geometry) );
      instance.SetNew(&new_Geometry);
      instance.SetNewArray(&newArray_Geometry);
      instance.SetDelete(&delete_Geometry);
      instance.SetDeleteArray(&deleteArray_Geometry);
      instance.SetDestructor(&destruct_Geometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Geometry*)
   {
      return GenerateInitInstanceLocal((::Geometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Geometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Geometry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Geometry*)0x0)->GetClass();
      Geometry_TClassManip(theClass);
   return theClass;
   }

   static void Geometry_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Geometry.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HeftyInfo_Dictionary();
   static void HeftyInfo_TClassManip(TClass*);
   static void *new_HeftyInfo(void *p = 0);
   static void *newArray_HeftyInfo(Long_t size, void *p);
   static void delete_HeftyInfo(void *p);
   static void deleteArray_HeftyInfo(void *p);
   static void destruct_HeftyInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HeftyInfo*)
   {
      ::HeftyInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HeftyInfo));
      static ::ROOT::TGenericClassInfo 
         instance("HeftyInfo", "HeftyInfo.h", 13,
                  typeid(::HeftyInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HeftyInfo_Dictionary, isa_proxy, 4,
                  sizeof(::HeftyInfo) );
      instance.SetNew(&new_HeftyInfo);
      instance.SetNewArray(&newArray_HeftyInfo);
      instance.SetDelete(&delete_HeftyInfo);
      instance.SetDeleteArray(&deleteArray_HeftyInfo);
      instance.SetDestructor(&destruct_HeftyInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HeftyInfo*)
   {
      return GenerateInitInstanceLocal((::HeftyInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::HeftyInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HeftyInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::HeftyInfo*)0x0)->GetClass();
      HeftyInfo_TClassManip(theClass);
   return theClass;
   }

   static void HeftyInfo_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","HeftyInfo.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *LAPPDHit_Dictionary();
   static void LAPPDHit_TClassManip(TClass*);
   static void *new_LAPPDHit(void *p = 0);
   static void *newArray_LAPPDHit(Long_t size, void *p);
   static void delete_LAPPDHit(void *p);
   static void deleteArray_LAPPDHit(void *p);
   static void destruct_LAPPDHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LAPPDHit*)
   {
      ::LAPPDHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LAPPDHit));
      static ::ROOT::TGenericClassInfo 
         instance("LAPPDHit", "LAPPDHit.h", 11,
                  typeid(::LAPPDHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LAPPDHit_Dictionary, isa_proxy, 4,
                  sizeof(::LAPPDHit) );
      instance.SetNew(&new_LAPPDHit);
      instance.SetNewArray(&newArray_LAPPDHit);
      instance.SetDelete(&delete_LAPPDHit);
      instance.SetDeleteArray(&deleteArray_LAPPDHit);
      instance.SetDestructor(&destruct_LAPPDHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LAPPDHit*)
   {
      return GenerateInitInstanceLocal((::LAPPDHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LAPPDHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LAPPDHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LAPPDHit*)0x0)->GetClass();
      LAPPDHit_TClassManip(theClass);
   return theClass;
   }

   static void LAPPDHit_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","LAPPDHit.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MCLAPPDHit_Dictionary();
   static void MCLAPPDHit_TClassManip(TClass*);
   static void *new_MCLAPPDHit(void *p = 0);
   static void *newArray_MCLAPPDHit(Long_t size, void *p);
   static void delete_MCLAPPDHit(void *p);
   static void deleteArray_MCLAPPDHit(void *p);
   static void destruct_MCLAPPDHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MCLAPPDHit*)
   {
      ::MCLAPPDHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MCLAPPDHit));
      static ::ROOT::TGenericClassInfo 
         instance("MCLAPPDHit", "LAPPDHit.h", 53,
                  typeid(::MCLAPPDHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MCLAPPDHit_Dictionary, isa_proxy, 4,
                  sizeof(::MCLAPPDHit) );
      instance.SetNew(&new_MCLAPPDHit);
      instance.SetNewArray(&newArray_MCLAPPDHit);
      instance.SetDelete(&delete_MCLAPPDHit);
      instance.SetDeleteArray(&deleteArray_MCLAPPDHit);
      instance.SetDestructor(&destruct_MCLAPPDHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MCLAPPDHit*)
   {
      return GenerateInitInstanceLocal((::MCLAPPDHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MCLAPPDHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MCLAPPDHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MCLAPPDHit*)0x0)->GetClass();
      MCLAPPDHit_TClassManip(theClass);
   return theClass;
   }

   static void MCLAPPDHit_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","LAPPDHit.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TriggerClass_Dictionary();
   static void TriggerClass_TClassManip(TClass*);
   static void *new_TriggerClass(void *p = 0);
   static void *newArray_TriggerClass(Long_t size, void *p);
   static void delete_TriggerClass(void *p);
   static void deleteArray_TriggerClass(void *p);
   static void destruct_TriggerClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerClass*)
   {
      ::TriggerClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TriggerClass));
      static ::ROOT::TGenericClassInfo 
         instance("TriggerClass", "TriggerClass.h", 10,
                  typeid(::TriggerClass), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TriggerClass_Dictionary, isa_proxy, 4,
                  sizeof(::TriggerClass) );
      instance.SetNew(&new_TriggerClass);
      instance.SetNewArray(&newArray_TriggerClass);
      instance.SetDelete(&delete_TriggerClass);
      instance.SetDeleteArray(&deleteArray_TriggerClass);
      instance.SetDestructor(&destruct_TriggerClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerClass*)
   {
      return GenerateInitInstanceLocal((::TriggerClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriggerClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TriggerClass_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TriggerClass*)0x0)->GetClass();
      TriggerClass_TClassManip(theClass);
   return theClass;
   }

   static void TriggerClass_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","TriggerClass.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoDigit_Dictionary();
   static void RecoDigit_TClassManip(TClass*);
   static void *new_RecoDigit(void *p = 0);
   static void *newArray_RecoDigit(Long_t size, void *p);
   static void delete_RecoDigit(void *p);
   static void deleteArray_RecoDigit(void *p);
   static void destruct_RecoDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoDigit*)
   {
      ::RecoDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoDigit));
      static ::ROOT::TGenericClassInfo 
         instance("RecoDigit", "RecoDigit.h", 12,
                  typeid(::RecoDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoDigit_Dictionary, isa_proxy, 4,
                  sizeof(::RecoDigit) );
      instance.SetNew(&new_RecoDigit);
      instance.SetNewArray(&newArray_RecoDigit);
      instance.SetDelete(&delete_RecoDigit);
      instance.SetDeleteArray(&deleteArray_RecoDigit);
      instance.SetDestructor(&destruct_RecoDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoDigit*)
   {
      return GenerateInitInstanceLocal((::RecoDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoDigit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoDigit*)0x0)->GetClass();
      RecoDigit_TClassManip(theClass);
   return theClass;
   }

   static void RecoDigit_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","RecoDigit.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *Parameters_Dictionary();
   static void Parameters_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Parameters*)
   {
      ::Parameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Parameters));
      static ::ROOT::TGenericClassInfo 
         instance("Parameters", "Parameters.h", 10,
                  typeid(::Parameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Parameters_Dictionary, isa_proxy, 4,
                  sizeof(::Parameters) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Parameters*)
   {
      return GenerateInitInstanceLocal((::Parameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Parameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Parameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Parameters*)0x0)->GetClass();
      Parameters_TClassManip(theClass);
   return theClass;
   }

   static void Parameters_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","Parameters.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoVertex_Dictionary();
   static void RecoVertex_TClassManip(TClass*);
   static void *new_RecoVertex(void *p = 0);
   static void *newArray_RecoVertex(Long_t size, void *p);
   static void delete_RecoVertex(void *p);
   static void deleteArray_RecoVertex(void *p);
   static void destruct_RecoVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoVertex*)
   {
      ::RecoVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoVertex));
      static ::ROOT::TGenericClassInfo 
         instance("RecoVertex", "RecoVertex.h", 12,
                  typeid(::RecoVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoVertex_Dictionary, isa_proxy, 4,
                  sizeof(::RecoVertex) );
      instance.SetNew(&new_RecoVertex);
      instance.SetNewArray(&newArray_RecoVertex);
      instance.SetDelete(&delete_RecoVertex);
      instance.SetDeleteArray(&deleteArray_RecoVertex);
      instance.SetDestructor(&destruct_RecoVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoVertex*)
   {
      return GenerateInitInstanceLocal((::RecoVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoVertex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoVertex*)0x0)->GetClass();
      RecoVertex_TClassManip(theClass);
   return theClass;
   }

   static void RecoVertex_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","RecoVertex.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoRing_Dictionary();
   static void RecoRing_TClassManip(TClass*);
   static void delete_RecoRing(void *p);
   static void deleteArray_RecoRing(void *p);
   static void destruct_RecoRing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoRing*)
   {
      ::RecoRing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoRing));
      static ::ROOT::TGenericClassInfo 
         instance("RecoRing", "RecoRing.h", 5,
                  typeid(::RecoRing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoRing_Dictionary, isa_proxy, 4,
                  sizeof(::RecoRing) );
      instance.SetDelete(&delete_RecoRing);
      instance.SetDeleteArray(&deleteArray_RecoRing);
      instance.SetDestructor(&destruct_RecoRing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoRing*)
   {
      return GenerateInitInstanceLocal((::RecoRing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoRing*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoRing_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoRing*)0x0)->GetClass();
      RecoRing_TClassManip(theClass);
   return theClass;
   }

   static void RecoRing_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","RecoRing.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MRDOut_Dictionary();
   static void MRDOut_TClassManip(TClass*);
   static void *new_MRDOut(void *p = 0);
   static void *newArray_MRDOut(Long_t size, void *p);
   static void delete_MRDOut(void *p);
   static void deleteArray_MRDOut(void *p);
   static void destruct_MRDOut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MRDOut*)
   {
      ::MRDOut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MRDOut));
      static ::ROOT::TGenericClassInfo 
         instance("MRDOut", "MRDOut.h", 7,
                  typeid(::MRDOut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MRDOut_Dictionary, isa_proxy, 4,
                  sizeof(::MRDOut) );
      instance.SetNew(&new_MRDOut);
      instance.SetNewArray(&newArray_MRDOut);
      instance.SetDelete(&delete_MRDOut);
      instance.SetDeleteArray(&deleteArray_MRDOut);
      instance.SetDestructor(&destruct_MRDOut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MRDOut*)
   {
      return GenerateInitInstanceLocal((::MRDOut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MRDOut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MRDOut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MRDOut*)0x0)->GetClass();
      MRDOut_TClassManip(theClass);
   return theClass;
   }

   static void MRDOut_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","MRDOut.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *LAPPDPulse_Dictionary();
   static void LAPPDPulse_TClassManip(TClass*);
   static void *new_LAPPDPulse(void *p = 0);
   static void *newArray_LAPPDPulse(Long_t size, void *p);
   static void delete_LAPPDPulse(void *p);
   static void deleteArray_LAPPDPulse(void *p);
   static void destruct_LAPPDPulse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LAPPDPulse*)
   {
      ::LAPPDPulse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LAPPDPulse));
      static ::ROOT::TGenericClassInfo 
         instance("LAPPDPulse", "LAPPDPulse.h", 10,
                  typeid(::LAPPDPulse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LAPPDPulse_Dictionary, isa_proxy, 4,
                  sizeof(::LAPPDPulse) );
      instance.SetNew(&new_LAPPDPulse);
      instance.SetNewArray(&newArray_LAPPDPulse);
      instance.SetDelete(&delete_LAPPDPulse);
      instance.SetDeleteArray(&deleteArray_LAPPDPulse);
      instance.SetDestructor(&destruct_LAPPDPulse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LAPPDPulse*)
   {
      return GenerateInitInstanceLocal((::LAPPDPulse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LAPPDPulse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LAPPDPulse_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LAPPDPulse*)0x0)->GetClass();
      LAPPDPulse_TClassManip(theClass);
   return theClass;
   }

   static void LAPPDPulse_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","LAPPDPulse.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TriggerData_Dictionary();
   static void TriggerData_TClassManip(TClass*);
   static void *new_TriggerData(void *p = 0);
   static void *newArray_TriggerData(Long_t size, void *p);
   static void delete_TriggerData(void *p);
   static void deleteArray_TriggerData(void *p);
   static void destruct_TriggerData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerData*)
   {
      ::TriggerData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TriggerData));
      static ::ROOT::TGenericClassInfo 
         instance("TriggerData", "TriggerData.h", 17,
                  typeid(::TriggerData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TriggerData_Dictionary, isa_proxy, 4,
                  sizeof(::TriggerData) );
      instance.SetNew(&new_TriggerData);
      instance.SetNewArray(&newArray_TriggerData);
      instance.SetDelete(&delete_TriggerData);
      instance.SetDeleteArray(&deleteArray_TriggerData);
      instance.SetDestructor(&destruct_TriggerData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerData*)
   {
      return GenerateInitInstanceLocal((::TriggerData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TriggerData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TriggerData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TriggerData*)0x0)->GetClass();
      TriggerData_TClassManip(theClass);
   return theClass;
   }

   static void TriggerData_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","TriggerData.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *DataModel_Dictionary();
   static void DataModel_TClassManip(TClass*);
   static void *new_DataModel(void *p = 0);
   static void *newArray_DataModel(Long_t size, void *p);
   static void delete_DataModel(void *p);
   static void deleteArray_DataModel(void *p);
   static void destruct_DataModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataModel*)
   {
      ::DataModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DataModel));
      static ::ROOT::TGenericClassInfo 
         instance("DataModel", "DataModel.h", 56,
                  typeid(::DataModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DataModel_Dictionary, isa_proxy, 4,
                  sizeof(::DataModel) );
      instance.SetNew(&new_DataModel);
      instance.SetNewArray(&newArray_DataModel);
      instance.SetDelete(&delete_DataModel);
      instance.SetDeleteArray(&deleteArray_DataModel);
      instance.SetDestructor(&destruct_DataModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataModel*)
   {
      return GenerateInitInstanceLocal((::DataModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DataModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DataModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DataModel*)0x0)->GetClass();
      DataModel_TClassManip(theClass);
   return theClass;
   }

   static void DataModel_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","DataModel.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleRoot_Dictionary();
   static void ExampleRoot_TClassManip(TClass*);
   static void *new_ExampleRoot(void *p = 0);
   static void *newArray_ExampleRoot(Long_t size, void *p);
   static void delete_ExampleRoot(void *p);
   static void deleteArray_ExampleRoot(void *p);
   static void destruct_ExampleRoot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleRoot*)
   {
      ::ExampleRoot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleRoot));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleRoot", "ExampleRoot.h", 26,
                  typeid(::ExampleRoot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleRoot_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleRoot) );
      instance.SetNew(&new_ExampleRoot);
      instance.SetNewArray(&newArray_ExampleRoot);
      instance.SetDelete(&delete_ExampleRoot);
      instance.SetDeleteArray(&deleteArray_ExampleRoot);
      instance.SetDestructor(&destruct_ExampleRoot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleRoot*)
   {
      return GenerateInitInstanceLocal((::ExampleRoot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleRoot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleRoot_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleRoot*)0x0)->GetClass();
      ExampleRoot_TClassManip(theClass);
   return theClass;
   }

   static void ExampleRoot_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","ExampleRoot.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WaterModel_Dictionary();
   static void WaterModel_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WaterModel*)
   {
      ::WaterModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WaterModel));
      static ::ROOT::TGenericClassInfo 
         instance("WaterModel", "WaterModel.h", 12,
                  typeid(::WaterModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WaterModel_Dictionary, isa_proxy, 4,
                  sizeof(::WaterModel) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WaterModel*)
   {
      return GenerateInitInstanceLocal((::WaterModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::WaterModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WaterModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WaterModel*)0x0)->GetClass();
      WaterModel_TClassManip(theClass);
   return theClass;
   }

   static void WaterModel_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","WaterModel.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *WaterModelcLcLwaterM_Dictionary();
   static void WaterModelcLcLwaterM_TClassManip(TClass*);
   static void *new_WaterModelcLcLwaterM(void *p = 0);
   static void *newArray_WaterModelcLcLwaterM(Long_t size, void *p);
   static void delete_WaterModelcLcLwaterM(void *p);
   static void deleteArray_WaterModelcLcLwaterM(void *p);
   static void destruct_WaterModelcLcLwaterM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WaterModel::waterM*)
   {
      ::WaterModel::waterM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::WaterModel::waterM));
      static ::ROOT::TGenericClassInfo 
         instance("WaterModel::waterM", "WaterModel.h", 19,
                  typeid(::WaterModel::waterM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &WaterModelcLcLwaterM_Dictionary, isa_proxy, 4,
                  sizeof(::WaterModel::waterM) );
      instance.SetNew(&new_WaterModelcLcLwaterM);
      instance.SetNewArray(&newArray_WaterModelcLcLwaterM);
      instance.SetDelete(&delete_WaterModelcLcLwaterM);
      instance.SetDeleteArray(&deleteArray_WaterModelcLcLwaterM);
      instance.SetDestructor(&destruct_WaterModelcLcLwaterM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WaterModel::waterM*)
   {
      return GenerateInitInstanceLocal((::WaterModel::waterM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::WaterModel::waterM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *WaterModelcLcLwaterM_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::WaterModel::waterM*)0x0)->GetClass();
      WaterModelcLcLwaterM_TClassManip(theClass);
   return theClass;
   }

   static void WaterModelcLcLwaterM_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","WaterModel.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *VertexGeometry_Dictionary();
   static void VertexGeometry_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::VertexGeometry*)
   {
      ::VertexGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::VertexGeometry));
      static ::ROOT::TGenericClassInfo 
         instance("VertexGeometry", "VertexGeometry.h", 14,
                  typeid(::VertexGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &VertexGeometry_Dictionary, isa_proxy, 4,
                  sizeof(::VertexGeometry) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::VertexGeometry*)
   {
      return GenerateInitInstanceLocal((::VertexGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::VertexGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *VertexGeometry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::VertexGeometry*)0x0)->GetClass();
      VertexGeometry_TClassManip(theClass);
   return theClass;
   }

   static void VertexGeometry_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","VertexGeometry.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *FoMCalculator_Dictionary();
   static void FoMCalculator_TClassManip(TClass*);
   static void *new_FoMCalculator(void *p = 0);
   static void *newArray_FoMCalculator(Long_t size, void *p);
   static void delete_FoMCalculator(void *p);
   static void deleteArray_FoMCalculator(void *p);
   static void destruct_FoMCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FoMCalculator*)
   {
      ::FoMCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::FoMCalculator));
      static ::ROOT::TGenericClassInfo 
         instance("FoMCalculator", "FoMCalculator.h", 24,
                  typeid(::FoMCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FoMCalculator_Dictionary, isa_proxy, 4,
                  sizeof(::FoMCalculator) );
      instance.SetNew(&new_FoMCalculator);
      instance.SetNewArray(&newArray_FoMCalculator);
      instance.SetDelete(&delete_FoMCalculator);
      instance.SetDeleteArray(&deleteArray_FoMCalculator);
      instance.SetDestructor(&destruct_FoMCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FoMCalculator*)
   {
      return GenerateInitInstanceLocal((::FoMCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FoMCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FoMCalculator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::FoMCalculator*)0x0)->GetClass();
      FoMCalculator_TClassManip(theClass);
   return theClass;
   }

   static void FoMCalculator_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","FoMCalculator.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GenieInfo_Dictionary();
   static void GenieInfo_TClassManip(TClass*);
   static void *new_GenieInfo(void *p = 0);
   static void *newArray_GenieInfo(Long_t size, void *p);
   static void delete_GenieInfo(void *p);
   static void deleteArray_GenieInfo(void *p);
   static void destruct_GenieInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GenieInfo*)
   {
      ::GenieInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GenieInfo));
      static ::ROOT::TGenericClassInfo 
         instance("GenieInfo", "GenieInfo.h", 10,
                  typeid(::GenieInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GenieInfo_Dictionary, isa_proxy, 4,
                  sizeof(::GenieInfo) );
      instance.SetNew(&new_GenieInfo);
      instance.SetNewArray(&newArray_GenieInfo);
      instance.SetDelete(&delete_GenieInfo);
      instance.SetDeleteArray(&deleteArray_GenieInfo);
      instance.SetDestructor(&destruct_GenieInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GenieInfo*)
   {
      return GenerateInitInstanceLocal((::GenieInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GenieInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GenieInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GenieInfo*)0x0)->GetClass();
      GenieInfo_TClassManip(theClass);
   return theClass;
   }

   static void GenieInfo_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","GenieInfo.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MinuitOptimizer_Dictionary();
   static void MinuitOptimizer_TClassManip(TClass*);
   static void *new_MinuitOptimizer(void *p = 0);
   static void *newArray_MinuitOptimizer(Long_t size, void *p);
   static void delete_MinuitOptimizer(void *p);
   static void deleteArray_MinuitOptimizer(void *p);
   static void destruct_MinuitOptimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MinuitOptimizer*)
   {
      ::MinuitOptimizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MinuitOptimizer));
      static ::ROOT::TGenericClassInfo 
         instance("MinuitOptimizer", "MinuitOptimizer.h", 26,
                  typeid(::MinuitOptimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MinuitOptimizer_Dictionary, isa_proxy, 4,
                  sizeof(::MinuitOptimizer) );
      instance.SetNew(&new_MinuitOptimizer);
      instance.SetNewArray(&newArray_MinuitOptimizer);
      instance.SetDelete(&delete_MinuitOptimizer);
      instance.SetDeleteArray(&deleteArray_MinuitOptimizer);
      instance.SetDestructor(&destruct_MinuitOptimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MinuitOptimizer*)
   {
      return GenerateInitInstanceLocal((::MinuitOptimizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MinuitOptimizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MinuitOptimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MinuitOptimizer*)0x0)->GetClass();
      MinuitOptimizer_TClassManip(theClass);
   return theClass;
   }

   static void MinuitOptimizer_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","MinuitOptimizer.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NnlsSolution_Dictionary();
   static void NnlsSolution_TClassManip(TClass*);
   static void *new_NnlsSolution(void *p = 0);
   static void *newArray_NnlsSolution(Long_t size, void *p);
   static void delete_NnlsSolution(void *p);
   static void deleteArray_NnlsSolution(void *p);
   static void destruct_NnlsSolution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NnlsSolution*)
   {
      ::NnlsSolution *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NnlsSolution));
      static ::ROOT::TGenericClassInfo 
         instance("NnlsSolution", "NnlsSolution.h", 21,
                  typeid(::NnlsSolution), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NnlsSolution_Dictionary, isa_proxy, 4,
                  sizeof(::NnlsSolution) );
      instance.SetNew(&new_NnlsSolution);
      instance.SetNewArray(&newArray_NnlsSolution);
      instance.SetDelete(&delete_NnlsSolution);
      instance.SetDeleteArray(&deleteArray_NnlsSolution);
      instance.SetDestructor(&destruct_NnlsSolution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NnlsSolution*)
   {
      return GenerateInitInstanceLocal((::NnlsSolution*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::NnlsSolution*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NnlsSolution_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::NnlsSolution*)0x0)->GetClass();
      NnlsSolution_TClassManip(theClass);
   return theClass;
   }

   static void NnlsSolution_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","NnlsSolution.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *PsecData_Dictionary();
   static void PsecData_TClassManip(TClass*);
   static void *new_PsecData(void *p = 0);
   static void *newArray_PsecData(Long_t size, void *p);
   static void delete_PsecData(void *p);
   static void deleteArray_PsecData(void *p);
   static void destruct_PsecData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PsecData*)
   {
      ::PsecData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::PsecData));
      static ::ROOT::TGenericClassInfo 
         instance("PsecData", "PsecData.h", 14,
                  typeid(::PsecData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PsecData_Dictionary, isa_proxy, 4,
                  sizeof(::PsecData) );
      instance.SetNew(&new_PsecData);
      instance.SetNewArray(&newArray_PsecData);
      instance.SetDelete(&delete_PsecData);
      instance.SetDeleteArray(&deleteArray_PsecData);
      instance.SetDestructor(&destruct_PsecData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PsecData*)
   {
      return GenerateInitInstanceLocal((::PsecData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PsecData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PsecData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PsecData*)0x0)->GetClass();
      PsecData_TClassManip(theClass);
   return theClass;
   }

   static void PsecData_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","PsecData.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoCluster_Dictionary();
   static void RecoCluster_TClassManip(TClass*);
   static void *new_RecoCluster(void *p = 0);
   static void *newArray_RecoCluster(Long_t size, void *p);
   static void delete_RecoCluster(void *p);
   static void deleteArray_RecoCluster(void *p);
   static void destruct_RecoCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoCluster*)
   {
      ::RecoCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoCluster));
      static ::ROOT::TGenericClassInfo 
         instance("RecoCluster", "RecoCluster.h", 8,
                  typeid(::RecoCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoCluster_Dictionary, isa_proxy, 4,
                  sizeof(::RecoCluster) );
      instance.SetNew(&new_RecoCluster);
      instance.SetNewArray(&newArray_RecoCluster);
      instance.SetDelete(&delete_RecoCluster);
      instance.SetDeleteArray(&deleteArray_RecoCluster);
      instance.SetDestructor(&destruct_RecoCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoCluster*)
   {
      return GenerateInitInstanceLocal((::RecoCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoCluster*)0x0)->GetClass();
      RecoCluster_TClassManip(theClass);
   return theClass;
   }

   static void RecoCluster_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","RecoCluster.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RecoClusterDigit_Dictionary();
   static void RecoClusterDigit_TClassManip(TClass*);
   static void delete_RecoClusterDigit(void *p);
   static void deleteArray_RecoClusterDigit(void *p);
   static void destruct_RecoClusterDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RecoClusterDigit*)
   {
      ::RecoClusterDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RecoClusterDigit));
      static ::ROOT::TGenericClassInfo 
         instance("RecoClusterDigit", "RecoClusterDigit.h", 11,
                  typeid(::RecoClusterDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RecoClusterDigit_Dictionary, isa_proxy, 4,
                  sizeof(::RecoClusterDigit) );
      instance.SetDelete(&delete_RecoClusterDigit);
      instance.SetDeleteArray(&deleteArray_RecoClusterDigit);
      instance.SetDestructor(&destruct_RecoClusterDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RecoClusterDigit*)
   {
      return GenerateInitInstanceLocal((::RecoClusterDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RecoClusterDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RecoClusterDigit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RecoClusterDigit*)0x0)->GetClass();
      RecoClusterDigit_TClassManip(theClass);
   return theClass;
   }

   static void RecoClusterDigit_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","RecoClusterDigit.h");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SlowControlMonitor_Dictionary();
   static void SlowControlMonitor_TClassManip(TClass*);
   static void *new_SlowControlMonitor(void *p = 0);
   static void *newArray_SlowControlMonitor(Long_t size, void *p);
   static void delete_SlowControlMonitor(void *p);
   static void deleteArray_SlowControlMonitor(void *p);
   static void destruct_SlowControlMonitor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SlowControlMonitor*)
   {
      ::SlowControlMonitor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SlowControlMonitor));
      static ::ROOT::TGenericClassInfo 
         instance("SlowControlMonitor", "SlowControlMonitor.h", 15,
                  typeid(::SlowControlMonitor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SlowControlMonitor_Dictionary, isa_proxy, 4,
                  sizeof(::SlowControlMonitor) );
      instance.SetNew(&new_SlowControlMonitor);
      instance.SetNewArray(&newArray_SlowControlMonitor);
      instance.SetDelete(&delete_SlowControlMonitor);
      instance.SetDeleteArray(&deleteArray_SlowControlMonitor);
      instance.SetDestructor(&destruct_SlowControlMonitor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SlowControlMonitor*)
   {
      return GenerateInitInstanceLocal((::SlowControlMonitor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SlowControlMonitor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SlowControlMonitor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SlowControlMonitor*)0x0)->GetClass();
      SlowControlMonitor_TClassManip(theClass);
   return theClass;
   }

   static void SlowControlMonitor_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("file_name","SlowControlMonitor.h");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChannelKey(void *p) {
      return  p ? new(p) ::ChannelKey : new ::ChannelKey;
   }
   static void *newArray_ChannelKey(Long_t nElements, void *p) {
      return p ? new(p) ::ChannelKey[nElements] : new ::ChannelKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChannelKey(void *p) {
      delete ((::ChannelKey*)p);
   }
   static void deleteArray_ChannelKey(void *p) {
      delete [] ((::ChannelKey*)p);
   }
   static void destruct_ChannelKey(void *p) {
      typedef ::ChannelKey current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChannelKey

namespace ROOT {
   // Wrappers around operator new
   static void *new_Hit(void *p) {
      return  p ? new(p) ::Hit : new ::Hit;
   }
   static void *newArray_Hit(Long_t nElements, void *p) {
      return p ? new(p) ::Hit[nElements] : new ::Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_Hit(void *p) {
      delete ((::Hit*)p);
   }
   static void deleteArray_Hit(void *p) {
      delete [] ((::Hit*)p);
   }
   static void destruct_Hit(void *p) {
      typedef ::Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Hit

namespace ROOT {
   // Wrappers around operator new
   static void *new_MCHit(void *p) {
      return  p ? new(p) ::MCHit : new ::MCHit;
   }
   static void *newArray_MCHit(Long_t nElements, void *p) {
      return p ? new(p) ::MCHit[nElements] : new ::MCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MCHit(void *p) {
      delete ((::MCHit*)p);
   }
   static void deleteArray_MCHit(void *p) {
      delete [] ((::MCHit*)p);
   }
   static void destruct_MCHit(void *p) {
      typedef ::MCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MCHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ADCPulse(void *p) {
      return  p ? new(p) ::ADCPulse : new ::ADCPulse;
   }
   static void *newArray_ADCPulse(Long_t nElements, void *p) {
      return p ? new(p) ::ADCPulse[nElements] : new ::ADCPulse[nElements];
   }
   // Wrapper around operator delete
   static void delete_ADCPulse(void *p) {
      delete ((::ADCPulse*)p);
   }
   static void deleteArray_ADCPulse(void *p) {
      delete [] ((::ADCPulse*)p);
   }
   static void destruct_ADCPulse(void *p) {
      typedef ::ADCPulse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ADCPulse

namespace ROOT {
} // end of namespace ROOT for class ::ANNIEGeometry

namespace ROOT {
} // end of namespace ROOT for class ::ANNIERecoObjectTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_BeamDataPoint(void *p) {
      return  p ? new(p) ::BeamDataPoint : new ::BeamDataPoint;
   }
   static void *newArray_BeamDataPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BeamDataPoint[nElements] : new ::BeamDataPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BeamDataPoint(void *p) {
      delete ((::BeamDataPoint*)p);
   }
   static void deleteArray_BeamDataPoint(void *p) {
      delete [] ((::BeamDataPoint*)p);
   }
   static void destruct_BeamDataPoint(void *p) {
      typedef ::BeamDataPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BeamDataPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::boost::serialization::version<BeamDataPoint> : new ::boost::serialization::version<BeamDataPoint>;
   }
   static void *newArray_boostcLcLserializationcLcLversionlEBeamDataPointgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::boost::serialization::version<BeamDataPoint>[nElements] : new ::boost::serialization::version<BeamDataPoint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p) {
      delete ((::boost::serialization::version<BeamDataPoint>*)p);
   }
   static void deleteArray_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p) {
      delete [] ((::boost::serialization::version<BeamDataPoint>*)p);
   }
   static void destruct_boostcLcLserializationcLcLversionlEBeamDataPointgR(void *p) {
      typedef ::boost::serialization::version<BeamDataPoint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::boost::serialization::version<BeamDataPoint>

namespace ROOT {
   // Wrappers around operator new
   static void *new_TimeClass(void *p) {
      return  p ? new(p) ::TimeClass : new ::TimeClass;
   }
   static void *newArray_TimeClass(Long_t nElements, void *p) {
      return p ? new(p) ::TimeClass[nElements] : new ::TimeClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_TimeClass(void *p) {
      delete ((::TimeClass*)p);
   }
   static void deleteArray_TimeClass(void *p) {
      delete [] ((::TimeClass*)p);
   }
   static void destruct_TimeClass(void *p) {
      typedef ::TimeClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TimeClass

namespace ROOT {
   // Wrappers around operator new
   static void *new_BeamStatus(void *p) {
      return  p ? new(p) ::BeamStatus : new ::BeamStatus;
   }
   static void *newArray_BeamStatus(Long_t nElements, void *p) {
      return p ? new(p) ::BeamStatus[nElements] : new ::BeamStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_BeamStatus(void *p) {
      delete ((::BeamStatus*)p);
   }
   static void deleteArray_BeamStatus(void *p) {
      delete [] ((::BeamStatus*)p);
   }
   static void destruct_BeamStatus(void *p) {
      typedef ::BeamStatus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BeamStatus

namespace ROOT {
   // Wrappers around operator new
   static void *new_BeamStatusClass(void *p) {
      return  p ? new(p) ::BeamStatusClass : new ::BeamStatusClass;
   }
   static void *newArray_BeamStatusClass(Long_t nElements, void *p) {
      return p ? new(p) ::BeamStatusClass[nElements] : new ::BeamStatusClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_BeamStatusClass(void *p) {
      delete ((::BeamStatusClass*)p);
   }
   static void deleteArray_BeamStatusClass(void *p) {
      delete [] ((::BeamStatusClass*)p);
   }
   static void destruct_BeamStatusClass(void *p) {
      typedef ::BeamStatusClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BeamStatusClass

namespace ROOT {
   // Wrappers around operator new
   static void *new_WaveformlEdoublegR(void *p) {
      return  p ? new(p) ::Waveform<double> : new ::Waveform<double>;
   }
   static void *newArray_WaveformlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::Waveform<double>[nElements] : new ::Waveform<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_WaveformlEdoublegR(void *p) {
      delete ((::Waveform<double>*)p);
   }
   static void deleteArray_WaveformlEdoublegR(void *p) {
      delete [] ((::Waveform<double>*)p);
   }
   static void destruct_WaveformlEdoublegR(void *p) {
      typedef ::Waveform<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Waveform<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_CardData(void *p) {
      return  p ? new(p) ::CardData : new ::CardData;
   }
   static void *newArray_CardData(Long_t nElements, void *p) {
      return p ? new(p) ::CardData[nElements] : new ::CardData[nElements];
   }
   // Wrapper around operator delete
   static void delete_CardData(void *p) {
      delete ((::CardData*)p);
   }
   static void deleteArray_CardData(void *p) {
      delete [] ((::CardData*)p);
   }
   static void destruct_CardData(void *p) {
      typedef ::CardData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CardData

namespace ROOT {
   // Wrappers around operator new
   static void *new_Position(void *p) {
      return  p ? new(p) ::Position : new ::Position;
   }
   static void *newArray_Position(Long_t nElements, void *p) {
      return p ? new(p) ::Position[nElements] : new ::Position[nElements];
   }
   // Wrapper around operator delete
   static void delete_Position(void *p) {
      delete ((::Position*)p);
   }
   static void deleteArray_Position(void *p) {
      delete [] ((::Position*)p);
   }
   static void destruct_Position(void *p) {
      typedef ::Position current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Position

namespace ROOT {
   // Wrappers around operator new
   static void *new_FourVector(void *p) {
      return  p ? new(p) ::FourVector : new ::FourVector;
   }
   static void *newArray_FourVector(Long_t nElements, void *p) {
      return p ? new(p) ::FourVector[nElements] : new ::FourVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_FourVector(void *p) {
      delete ((::FourVector*)p);
   }
   static void deleteArray_FourVector(void *p) {
      delete [] ((::FourVector*)p);
   }
   static void destruct_FourVector(void *p) {
      typedef ::FourVector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FourVector

namespace ROOT {
   // Wrappers around operator new
   static void *new_Channel(void *p) {
      return  p ? new(p) ::Channel : new ::Channel;
   }
   static void *newArray_Channel(Long_t nElements, void *p) {
      return p ? new(p) ::Channel[nElements] : new ::Channel[nElements];
   }
   // Wrapper around operator delete
   static void delete_Channel(void *p) {
      delete ((::Channel*)p);
   }
   static void deleteArray_Channel(void *p) {
      delete [] ((::Channel*)p);
   }
   static void destruct_Channel(void *p) {
      typedef ::Channel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Channel

namespace ROOT {
   // Wrappers around operator new
   static void *new_LAPPD(void *p) {
      return  p ? new(p) ::LAPPD : new ::LAPPD;
   }
   static void *newArray_LAPPD(Long_t nElements, void *p) {
      return p ? new(p) ::LAPPD[nElements] : new ::LAPPD[nElements];
   }
   // Wrapper around operator delete
   static void delete_LAPPD(void *p) {
      delete ((::LAPPD*)p);
   }
   static void deleteArray_LAPPD(void *p) {
      delete [] ((::LAPPD*)p);
   }
   static void destruct_LAPPD(void *p) {
      typedef ::LAPPD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LAPPD

namespace ROOT {
   // Wrappers around operator new
   static void *new_Direction(void *p) {
      return  p ? new(p) ::Direction : new ::Direction;
   }
   static void *newArray_Direction(Long_t nElements, void *p) {
      return p ? new(p) ::Direction[nElements] : new ::Direction[nElements];
   }
   // Wrapper around operator delete
   static void delete_Direction(void *p) {
      delete ((::Direction*)p);
   }
   static void deleteArray_Direction(void *p) {
      delete [] ((::Direction*)p);
   }
   static void destruct_Direction(void *p) {
      typedef ::Direction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Direction

namespace ROOT {
   // Wrappers around operator new
   static void *new_Detector(void *p) {
      return  p ? new(p) ::Detector : new ::Detector;
   }
   static void *newArray_Detector(Long_t nElements, void *p) {
      return p ? new(p) ::Detector[nElements] : new ::Detector[nElements];
   }
   // Wrapper around operator delete
   static void delete_Detector(void *p) {
      delete ((::Detector*)p);
   }
   static void deleteArray_Detector(void *p) {
      delete [] ((::Detector*)p);
   }
   static void destruct_Detector(void *p) {
      typedef ::Detector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Detector

namespace ROOT {
   // Wrappers around operator new
   static void *new_Paddle(void *p) {
      return  p ? new(p) ::Paddle : new ::Paddle;
   }
   static void *newArray_Paddle(Long_t nElements, void *p) {
      return p ? new(p) ::Paddle[nElements] : new ::Paddle[nElements];
   }
   // Wrapper around operator delete
   static void delete_Paddle(void *p) {
      delete ((::Paddle*)p);
   }
   static void deleteArray_Paddle(void *p) {
      delete [] ((::Paddle*)p);
   }
   static void destruct_Paddle(void *p) {
      typedef ::Paddle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Paddle

namespace ROOT {
   // Wrappers around operator new
   static void *new_Particle(void *p) {
      return  p ? new(p) ::Particle : new ::Particle;
   }
   static void *newArray_Particle(Long_t nElements, void *p) {
      return p ? new(p) ::Particle[nElements] : new ::Particle[nElements];
   }
   // Wrapper around operator delete
   static void delete_Particle(void *p) {
      delete ((::Particle*)p);
   }
   static void deleteArray_Particle(void *p) {
      delete [] ((::Particle*)p);
   }
   static void destruct_Particle(void *p) {
      typedef ::Particle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Particle

namespace ROOT {
   // Wrappers around operator new
   static void *new_MCParticle(void *p) {
      return  p ? new(p) ::MCParticle : new ::MCParticle;
   }
   static void *newArray_MCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::MCParticle[nElements] : new ::MCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_MCParticle(void *p) {
      delete ((::MCParticle*)p);
   }
   static void deleteArray_MCParticle(void *p) {
      delete [] ((::MCParticle*)p);
   }
   static void destruct_MCParticle(void *p) {
      typedef ::MCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MCParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_Geometry(void *p) {
      return  p ? new(p) ::Geometry : new ::Geometry;
   }
   static void *newArray_Geometry(Long_t nElements, void *p) {
      return p ? new(p) ::Geometry[nElements] : new ::Geometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_Geometry(void *p) {
      delete ((::Geometry*)p);
   }
   static void deleteArray_Geometry(void *p) {
      delete [] ((::Geometry*)p);
   }
   static void destruct_Geometry(void *p) {
      typedef ::Geometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Geometry

namespace ROOT {
   // Wrappers around operator new
   static void *new_HeftyInfo(void *p) {
      return  p ? new(p) ::HeftyInfo : new ::HeftyInfo;
   }
   static void *newArray_HeftyInfo(Long_t nElements, void *p) {
      return p ? new(p) ::HeftyInfo[nElements] : new ::HeftyInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_HeftyInfo(void *p) {
      delete ((::HeftyInfo*)p);
   }
   static void deleteArray_HeftyInfo(void *p) {
      delete [] ((::HeftyInfo*)p);
   }
   static void destruct_HeftyInfo(void *p) {
      typedef ::HeftyInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HeftyInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_LAPPDHit(void *p) {
      return  p ? new(p) ::LAPPDHit : new ::LAPPDHit;
   }
   static void *newArray_LAPPDHit(Long_t nElements, void *p) {
      return p ? new(p) ::LAPPDHit[nElements] : new ::LAPPDHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_LAPPDHit(void *p) {
      delete ((::LAPPDHit*)p);
   }
   static void deleteArray_LAPPDHit(void *p) {
      delete [] ((::LAPPDHit*)p);
   }
   static void destruct_LAPPDHit(void *p) {
      typedef ::LAPPDHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LAPPDHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_MCLAPPDHit(void *p) {
      return  p ? new(p) ::MCLAPPDHit : new ::MCLAPPDHit;
   }
   static void *newArray_MCLAPPDHit(Long_t nElements, void *p) {
      return p ? new(p) ::MCLAPPDHit[nElements] : new ::MCLAPPDHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MCLAPPDHit(void *p) {
      delete ((::MCLAPPDHit*)p);
   }
   static void deleteArray_MCLAPPDHit(void *p) {
      delete [] ((::MCLAPPDHit*)p);
   }
   static void destruct_MCLAPPDHit(void *p) {
      typedef ::MCLAPPDHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MCLAPPDHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerClass(void *p) {
      return  p ? new(p) ::TriggerClass : new ::TriggerClass;
   }
   static void *newArray_TriggerClass(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerClass[nElements] : new ::TriggerClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerClass(void *p) {
      delete ((::TriggerClass*)p);
   }
   static void deleteArray_TriggerClass(void *p) {
      delete [] ((::TriggerClass*)p);
   }
   static void destruct_TriggerClass(void *p) {
      typedef ::TriggerClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriggerClass

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoDigit(void *p) {
      return  p ? new(p) ::RecoDigit : new ::RecoDigit;
   }
   static void *newArray_RecoDigit(Long_t nElements, void *p) {
      return p ? new(p) ::RecoDigit[nElements] : new ::RecoDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoDigit(void *p) {
      delete ((::RecoDigit*)p);
   }
   static void deleteArray_RecoDigit(void *p) {
      delete [] ((::RecoDigit*)p);
   }
   static void destruct_RecoDigit(void *p) {
      typedef ::RecoDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoDigit

namespace ROOT {
} // end of namespace ROOT for class ::Parameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoVertex(void *p) {
      return  p ? new(p) ::RecoVertex : new ::RecoVertex;
   }
   static void *newArray_RecoVertex(Long_t nElements, void *p) {
      return p ? new(p) ::RecoVertex[nElements] : new ::RecoVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoVertex(void *p) {
      delete ((::RecoVertex*)p);
   }
   static void deleteArray_RecoVertex(void *p) {
      delete [] ((::RecoVertex*)p);
   }
   static void destruct_RecoVertex(void *p) {
      typedef ::RecoVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoVertex

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RecoRing(void *p) {
      delete ((::RecoRing*)p);
   }
   static void deleteArray_RecoRing(void *p) {
      delete [] ((::RecoRing*)p);
   }
   static void destruct_RecoRing(void *p) {
      typedef ::RecoRing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoRing

namespace ROOT {
   // Wrappers around operator new
   static void *new_MRDOut(void *p) {
      return  p ? new(p) ::MRDOut : new ::MRDOut;
   }
   static void *newArray_MRDOut(Long_t nElements, void *p) {
      return p ? new(p) ::MRDOut[nElements] : new ::MRDOut[nElements];
   }
   // Wrapper around operator delete
   static void delete_MRDOut(void *p) {
      delete ((::MRDOut*)p);
   }
   static void deleteArray_MRDOut(void *p) {
      delete [] ((::MRDOut*)p);
   }
   static void destruct_MRDOut(void *p) {
      typedef ::MRDOut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MRDOut

namespace ROOT {
   // Wrappers around operator new
   static void *new_LAPPDPulse(void *p) {
      return  p ? new(p) ::LAPPDPulse : new ::LAPPDPulse;
   }
   static void *newArray_LAPPDPulse(Long_t nElements, void *p) {
      return p ? new(p) ::LAPPDPulse[nElements] : new ::LAPPDPulse[nElements];
   }
   // Wrapper around operator delete
   static void delete_LAPPDPulse(void *p) {
      delete ((::LAPPDPulse*)p);
   }
   static void deleteArray_LAPPDPulse(void *p) {
      delete [] ((::LAPPDPulse*)p);
   }
   static void destruct_LAPPDPulse(void *p) {
      typedef ::LAPPDPulse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LAPPDPulse

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerData(void *p) {
      return  p ? new(p) ::TriggerData : new ::TriggerData;
   }
   static void *newArray_TriggerData(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerData[nElements] : new ::TriggerData[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerData(void *p) {
      delete ((::TriggerData*)p);
   }
   static void deleteArray_TriggerData(void *p) {
      delete [] ((::TriggerData*)p);
   }
   static void destruct_TriggerData(void *p) {
      typedef ::TriggerData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TriggerData

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataModel(void *p) {
      return  p ? new(p) ::DataModel : new ::DataModel;
   }
   static void *newArray_DataModel(Long_t nElements, void *p) {
      return p ? new(p) ::DataModel[nElements] : new ::DataModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataModel(void *p) {
      delete ((::DataModel*)p);
   }
   static void deleteArray_DataModel(void *p) {
      delete [] ((::DataModel*)p);
   }
   static void destruct_DataModel(void *p) {
      typedef ::DataModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DataModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleRoot(void *p) {
      return  p ? new(p) ::ExampleRoot : new ::ExampleRoot;
   }
   static void *newArray_ExampleRoot(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleRoot[nElements] : new ::ExampleRoot[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleRoot(void *p) {
      delete ((::ExampleRoot*)p);
   }
   static void deleteArray_ExampleRoot(void *p) {
      delete [] ((::ExampleRoot*)p);
   }
   static void destruct_ExampleRoot(void *p) {
      typedef ::ExampleRoot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleRoot

namespace ROOT {
} // end of namespace ROOT for class ::WaterModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_WaterModelcLcLwaterM(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::WaterModel::waterM : new ::WaterModel::waterM;
   }
   static void *newArray_WaterModelcLcLwaterM(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::WaterModel::waterM[nElements] : new ::WaterModel::waterM[nElements];
   }
   // Wrapper around operator delete
   static void delete_WaterModelcLcLwaterM(void *p) {
      delete ((::WaterModel::waterM*)p);
   }
   static void deleteArray_WaterModelcLcLwaterM(void *p) {
      delete [] ((::WaterModel::waterM*)p);
   }
   static void destruct_WaterModelcLcLwaterM(void *p) {
      typedef ::WaterModel::waterM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WaterModel::waterM

namespace ROOT {
} // end of namespace ROOT for class ::VertexGeometry

namespace ROOT {
   // Wrappers around operator new
   static void *new_FoMCalculator(void *p) {
      return  p ? new(p) ::FoMCalculator : new ::FoMCalculator;
   }
   static void *newArray_FoMCalculator(Long_t nElements, void *p) {
      return p ? new(p) ::FoMCalculator[nElements] : new ::FoMCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_FoMCalculator(void *p) {
      delete ((::FoMCalculator*)p);
   }
   static void deleteArray_FoMCalculator(void *p) {
      delete [] ((::FoMCalculator*)p);
   }
   static void destruct_FoMCalculator(void *p) {
      typedef ::FoMCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::FoMCalculator

namespace ROOT {
   // Wrappers around operator new
   static void *new_GenieInfo(void *p) {
      return  p ? new(p) ::GenieInfo : new ::GenieInfo;
   }
   static void *newArray_GenieInfo(Long_t nElements, void *p) {
      return p ? new(p) ::GenieInfo[nElements] : new ::GenieInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_GenieInfo(void *p) {
      delete ((::GenieInfo*)p);
   }
   static void deleteArray_GenieInfo(void *p) {
      delete [] ((::GenieInfo*)p);
   }
   static void destruct_GenieInfo(void *p) {
      typedef ::GenieInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GenieInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_MinuitOptimizer(void *p) {
      return  p ? new(p) ::MinuitOptimizer : new ::MinuitOptimizer;
   }
   static void *newArray_MinuitOptimizer(Long_t nElements, void *p) {
      return p ? new(p) ::MinuitOptimizer[nElements] : new ::MinuitOptimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_MinuitOptimizer(void *p) {
      delete ((::MinuitOptimizer*)p);
   }
   static void deleteArray_MinuitOptimizer(void *p) {
      delete [] ((::MinuitOptimizer*)p);
   }
   static void destruct_MinuitOptimizer(void *p) {
      typedef ::MinuitOptimizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MinuitOptimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_NnlsSolution(void *p) {
      return  p ? new(p) ::NnlsSolution : new ::NnlsSolution;
   }
   static void *newArray_NnlsSolution(Long_t nElements, void *p) {
      return p ? new(p) ::NnlsSolution[nElements] : new ::NnlsSolution[nElements];
   }
   // Wrapper around operator delete
   static void delete_NnlsSolution(void *p) {
      delete ((::NnlsSolution*)p);
   }
   static void deleteArray_NnlsSolution(void *p) {
      delete [] ((::NnlsSolution*)p);
   }
   static void destruct_NnlsSolution(void *p) {
      typedef ::NnlsSolution current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NnlsSolution

namespace ROOT {
   // Wrappers around operator new
   static void *new_PsecData(void *p) {
      return  p ? new(p) ::PsecData : new ::PsecData;
   }
   static void *newArray_PsecData(Long_t nElements, void *p) {
      return p ? new(p) ::PsecData[nElements] : new ::PsecData[nElements];
   }
   // Wrapper around operator delete
   static void delete_PsecData(void *p) {
      delete ((::PsecData*)p);
   }
   static void deleteArray_PsecData(void *p) {
      delete [] ((::PsecData*)p);
   }
   static void destruct_PsecData(void *p) {
      typedef ::PsecData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PsecData

namespace ROOT {
   // Wrappers around operator new
   static void *new_RecoCluster(void *p) {
      return  p ? new(p) ::RecoCluster : new ::RecoCluster;
   }
   static void *newArray_RecoCluster(Long_t nElements, void *p) {
      return p ? new(p) ::RecoCluster[nElements] : new ::RecoCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_RecoCluster(void *p) {
      delete ((::RecoCluster*)p);
   }
   static void deleteArray_RecoCluster(void *p) {
      delete [] ((::RecoCluster*)p);
   }
   static void destruct_RecoCluster(void *p) {
      typedef ::RecoCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoCluster

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RecoClusterDigit(void *p) {
      delete ((::RecoClusterDigit*)p);
   }
   static void deleteArray_RecoClusterDigit(void *p) {
      delete [] ((::RecoClusterDigit*)p);
   }
   static void destruct_RecoClusterDigit(void *p) {
      typedef ::RecoClusterDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RecoClusterDigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_SlowControlMonitor(void *p) {
      return  p ? new(p) ::SlowControlMonitor : new ::SlowControlMonitor;
   }
   static void *newArray_SlowControlMonitor(Long_t nElements, void *p) {
      return p ? new(p) ::SlowControlMonitor[nElements] : new ::SlowControlMonitor[nElements];
   }
   // Wrapper around operator delete
   static void delete_SlowControlMonitor(void *p) {
      delete ((::SlowControlMonitor*)p);
   }
   static void deleteArray_SlowControlMonitor(void *p) {
      delete [] ((::SlowControlMonitor*)p);
   }
   static void destruct_SlowControlMonitor(void *p) {
      typedef ::SlowControlMonitor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SlowControlMonitor

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 339,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      ::ROOT::AddClassAlternate("vector<unsigned short>","std::vector<unsigned short, std::allocator<unsigned short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short>*)0x0)->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete ((vector<unsigned short>*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] ((vector<unsigned short>*)p);
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = 0);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 339,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      ::ROOT::AddClassAlternate("vector<unsigned long>","std::vector<unsigned long, std::allocator<unsigned long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long>*)0x0)->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete ((vector<unsigned long>*)p);
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] ((vector<unsigned long>*)p);
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 339,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 339,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 339,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 339,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = 0);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "vector", 339,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));

      ::ROOT::AddClassAlternate("vector<ULong64_t>","std::vector<unsigned long long, std::allocator<unsigned long long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0)->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete ((vector<ULong64_t>*)p);
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] ((vector<ULong64_t>*)p);
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

namespace ROOT {
   static TClass *vectorlERecoVertexmUgR_Dictionary();
   static void vectorlERecoVertexmUgR_TClassManip(TClass*);
   static void *new_vectorlERecoVertexmUgR(void *p = 0);
   static void *newArray_vectorlERecoVertexmUgR(Long_t size, void *p);
   static void delete_vectorlERecoVertexmUgR(void *p);
   static void deleteArray_vectorlERecoVertexmUgR(void *p);
   static void destruct_vectorlERecoVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RecoVertex*>*)
   {
      vector<RecoVertex*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RecoVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RecoVertex*>", -2, "vector", 339,
                  typeid(vector<RecoVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERecoVertexmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RecoVertex*>) );
      instance.SetNew(&new_vectorlERecoVertexmUgR);
      instance.SetNewArray(&newArray_vectorlERecoVertexmUgR);
      instance.SetDelete(&delete_vectorlERecoVertexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERecoVertexmUgR);
      instance.SetDestructor(&destruct_vectorlERecoVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RecoVertex*> >()));

      ::ROOT::AddClassAlternate("vector<RecoVertex*>","std::vector<RecoVertex*, std::allocator<RecoVertex*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RecoVertex*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERecoVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RecoVertex*>*)0x0)->GetClass();
      vectorlERecoVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERecoVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERecoVertexmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoVertex*> : new vector<RecoVertex*>;
   }
   static void *newArray_vectorlERecoVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoVertex*>[nElements] : new vector<RecoVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERecoVertexmUgR(void *p) {
      delete ((vector<RecoVertex*>*)p);
   }
   static void deleteArray_vectorlERecoVertexmUgR(void *p) {
      delete [] ((vector<RecoVertex*>*)p);
   }
   static void destruct_vectorlERecoVertexmUgR(void *p) {
      typedef vector<RecoVertex*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RecoVertex*>

namespace ROOT {
   static TClass *vectorlERecoDigitgR_Dictionary();
   static void vectorlERecoDigitgR_TClassManip(TClass*);
   static void *new_vectorlERecoDigitgR(void *p = 0);
   static void *newArray_vectorlERecoDigitgR(Long_t size, void *p);
   static void delete_vectorlERecoDigitgR(void *p);
   static void deleteArray_vectorlERecoDigitgR(void *p);
   static void destruct_vectorlERecoDigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RecoDigit>*)
   {
      vector<RecoDigit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RecoDigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RecoDigit>", -2, "vector", 339,
                  typeid(vector<RecoDigit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERecoDigitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RecoDigit>) );
      instance.SetNew(&new_vectorlERecoDigitgR);
      instance.SetNewArray(&newArray_vectorlERecoDigitgR);
      instance.SetDelete(&delete_vectorlERecoDigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlERecoDigitgR);
      instance.SetDestructor(&destruct_vectorlERecoDigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RecoDigit> >()));

      ::ROOT::AddClassAlternate("vector<RecoDigit>","std::vector<RecoDigit, std::allocator<RecoDigit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RecoDigit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERecoDigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RecoDigit>*)0x0)->GetClass();
      vectorlERecoDigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERecoDigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERecoDigitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoDigit> : new vector<RecoDigit>;
   }
   static void *newArray_vectorlERecoDigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoDigit>[nElements] : new vector<RecoDigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERecoDigitgR(void *p) {
      delete ((vector<RecoDigit>*)p);
   }
   static void deleteArray_vectorlERecoDigitgR(void *p) {
      delete [] ((vector<RecoDigit>*)p);
   }
   static void destruct_vectorlERecoDigitgR(void *p) {
      typedef vector<RecoDigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RecoDigit>

namespace ROOT {
   static TClass *vectorlERecoDigitmUgR_Dictionary();
   static void vectorlERecoDigitmUgR_TClassManip(TClass*);
   static void *new_vectorlERecoDigitmUgR(void *p = 0);
   static void *newArray_vectorlERecoDigitmUgR(Long_t size, void *p);
   static void delete_vectorlERecoDigitmUgR(void *p);
   static void deleteArray_vectorlERecoDigitmUgR(void *p);
   static void destruct_vectorlERecoDigitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RecoDigit*>*)
   {
      vector<RecoDigit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RecoDigit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RecoDigit*>", -2, "vector", 339,
                  typeid(vector<RecoDigit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERecoDigitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RecoDigit*>) );
      instance.SetNew(&new_vectorlERecoDigitmUgR);
      instance.SetNewArray(&newArray_vectorlERecoDigitmUgR);
      instance.SetDelete(&delete_vectorlERecoDigitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERecoDigitmUgR);
      instance.SetDestructor(&destruct_vectorlERecoDigitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RecoDigit*> >()));

      ::ROOT::AddClassAlternate("vector<RecoDigit*>","std::vector<RecoDigit*, std::allocator<RecoDigit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RecoDigit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERecoDigitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RecoDigit*>*)0x0)->GetClass();
      vectorlERecoDigitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERecoDigitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERecoDigitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoDigit*> : new vector<RecoDigit*>;
   }
   static void *newArray_vectorlERecoDigitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoDigit*>[nElements] : new vector<RecoDigit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERecoDigitmUgR(void *p) {
      delete ((vector<RecoDigit*>*)p);
   }
   static void deleteArray_vectorlERecoDigitmUgR(void *p) {
      delete [] ((vector<RecoDigit*>*)p);
   }
   static void destruct_vectorlERecoDigitmUgR(void *p) {
      typedef vector<RecoDigit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RecoDigit*>

namespace ROOT {
   static TClass *vectorlERecoClusterDigitmUgR_Dictionary();
   static void vectorlERecoClusterDigitmUgR_TClassManip(TClass*);
   static void *new_vectorlERecoClusterDigitmUgR(void *p = 0);
   static void *newArray_vectorlERecoClusterDigitmUgR(Long_t size, void *p);
   static void delete_vectorlERecoClusterDigitmUgR(void *p);
   static void deleteArray_vectorlERecoClusterDigitmUgR(void *p);
   static void destruct_vectorlERecoClusterDigitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RecoClusterDigit*>*)
   {
      vector<RecoClusterDigit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RecoClusterDigit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RecoClusterDigit*>", -2, "vector", 339,
                  typeid(vector<RecoClusterDigit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERecoClusterDigitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RecoClusterDigit*>) );
      instance.SetNew(&new_vectorlERecoClusterDigitmUgR);
      instance.SetNewArray(&newArray_vectorlERecoClusterDigitmUgR);
      instance.SetDelete(&delete_vectorlERecoClusterDigitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERecoClusterDigitmUgR);
      instance.SetDestructor(&destruct_vectorlERecoClusterDigitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RecoClusterDigit*> >()));

      ::ROOT::AddClassAlternate("vector<RecoClusterDigit*>","std::vector<RecoClusterDigit*, std::allocator<RecoClusterDigit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RecoClusterDigit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERecoClusterDigitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RecoClusterDigit*>*)0x0)->GetClass();
      vectorlERecoClusterDigitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERecoClusterDigitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERecoClusterDigitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoClusterDigit*> : new vector<RecoClusterDigit*>;
   }
   static void *newArray_vectorlERecoClusterDigitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RecoClusterDigit*>[nElements] : new vector<RecoClusterDigit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERecoClusterDigitmUgR(void *p) {
      delete ((vector<RecoClusterDigit*>*)p);
   }
   static void deleteArray_vectorlERecoClusterDigitmUgR(void *p) {
      delete [] ((vector<RecoClusterDigit*>*)p);
   }
   static void destruct_vectorlERecoClusterDigitmUgR(void *p) {
      typedef vector<RecoClusterDigit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RecoClusterDigit*>

namespace ROOT {
   static TClass *vectorlELong64_tgR_Dictionary();
   static void vectorlELong64_tgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tgR(void *p = 0);
   static void *newArray_vectorlELong64_tgR(Long_t size, void *p);
   static void delete_vectorlELong64_tgR(void *p);
   static void deleteArray_vectorlELong64_tgR(void *p);
   static void destruct_vectorlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t>*)
   {
      vector<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t>", -2, "vector", 339,
                  typeid(vector<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Long64_t>) );
      instance.SetNew(&new_vectorlELong64_tgR);
      instance.SetNewArray(&newArray_vectorlELong64_tgR);
      instance.SetDelete(&delete_vectorlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tgR);
      instance.SetDestructor(&destruct_vectorlELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t> >()));

      ::ROOT::AddClassAlternate("vector<Long64_t>","std::vector<long long, std::allocator<long long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Long64_t>*)0x0)->GetClass();
      vectorlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t> : new vector<Long64_t>;
   }
   static void *newArray_vectorlELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t>[nElements] : new vector<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tgR(void *p) {
      delete ((vector<Long64_t>*)p);
   }
   static void deleteArray_vectorlELong64_tgR(void *p) {
      delete [] ((vector<Long64_t>*)p);
   }
   static void destruct_vectorlELong64_tgR(void *p) {
      typedef vector<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t>

namespace ROOT {
   static TClass *maplEunsignedsPlongcOPaddlegR_Dictionary();
   static void maplEunsignedsPlongcOPaddlegR_TClassManip(TClass*);
   static void *new_maplEunsignedsPlongcOPaddlegR(void *p = 0);
   static void *newArray_maplEunsignedsPlongcOPaddlegR(Long_t size, void *p);
   static void delete_maplEunsignedsPlongcOPaddlegR(void *p);
   static void deleteArray_maplEunsignedsPlongcOPaddlegR(void *p);
   static void destruct_maplEunsignedsPlongcOPaddlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned long,Paddle>*)
   {
      map<unsigned long,Paddle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned long,Paddle>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned long,Paddle>", -2, "map", 100,
                  typeid(map<unsigned long,Paddle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPlongcOPaddlegR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned long,Paddle>) );
      instance.SetNew(&new_maplEunsignedsPlongcOPaddlegR);
      instance.SetNewArray(&newArray_maplEunsignedsPlongcOPaddlegR);
      instance.SetDelete(&delete_maplEunsignedsPlongcOPaddlegR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPlongcOPaddlegR);
      instance.SetDestructor(&destruct_maplEunsignedsPlongcOPaddlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned long,Paddle> >()));

      ::ROOT::AddClassAlternate("map<unsigned long,Paddle>","std::map<unsigned long, Paddle, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Paddle> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned long,Paddle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPlongcOPaddlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned long,Paddle>*)0x0)->GetClass();
      maplEunsignedsPlongcOPaddlegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPlongcOPaddlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPlongcOPaddlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Paddle> : new map<unsigned long,Paddle>;
   }
   static void *newArray_maplEunsignedsPlongcOPaddlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Paddle>[nElements] : new map<unsigned long,Paddle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPlongcOPaddlegR(void *p) {
      delete ((map<unsigned long,Paddle>*)p);
   }
   static void deleteArray_maplEunsignedsPlongcOPaddlegR(void *p) {
      delete [] ((map<unsigned long,Paddle>*)p);
   }
   static void destruct_maplEunsignedsPlongcOPaddlegR(void *p) {
      typedef map<unsigned long,Paddle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned long,Paddle>

namespace ROOT {
   static TClass *maplEunsignedsPlongcODetectorgR_Dictionary();
   static void maplEunsignedsPlongcODetectorgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPlongcODetectorgR(void *p = 0);
   static void *newArray_maplEunsignedsPlongcODetectorgR(Long_t size, void *p);
   static void delete_maplEunsignedsPlongcODetectorgR(void *p);
   static void deleteArray_maplEunsignedsPlongcODetectorgR(void *p);
   static void destruct_maplEunsignedsPlongcODetectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned long,Detector>*)
   {
      map<unsigned long,Detector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned long,Detector>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned long,Detector>", -2, "map", 100,
                  typeid(map<unsigned long,Detector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPlongcODetectorgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned long,Detector>) );
      instance.SetNew(&new_maplEunsignedsPlongcODetectorgR);
      instance.SetNewArray(&newArray_maplEunsignedsPlongcODetectorgR);
      instance.SetDelete(&delete_maplEunsignedsPlongcODetectorgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPlongcODetectorgR);
      instance.SetDestructor(&destruct_maplEunsignedsPlongcODetectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned long,Detector> >()));

      ::ROOT::AddClassAlternate("map<unsigned long,Detector>","std::map<unsigned long, Detector, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Detector> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned long,Detector>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPlongcODetectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned long,Detector>*)0x0)->GetClass();
      maplEunsignedsPlongcODetectorgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPlongcODetectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPlongcODetectorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Detector> : new map<unsigned long,Detector>;
   }
   static void *newArray_maplEunsignedsPlongcODetectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Detector>[nElements] : new map<unsigned long,Detector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPlongcODetectorgR(void *p) {
      delete ((map<unsigned long,Detector>*)p);
   }
   static void deleteArray_maplEunsignedsPlongcODetectorgR(void *p) {
      delete [] ((map<unsigned long,Detector>*)p);
   }
   static void destruct_maplEunsignedsPlongcODetectorgR(void *p) {
      typedef map<unsigned long,Detector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned long,Detector>

namespace ROOT {
   static TClass *maplEunsignedsPlongcODetectormUgR_Dictionary();
   static void maplEunsignedsPlongcODetectormUgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPlongcODetectormUgR(void *p = 0);
   static void *newArray_maplEunsignedsPlongcODetectormUgR(Long_t size, void *p);
   static void delete_maplEunsignedsPlongcODetectormUgR(void *p);
   static void deleteArray_maplEunsignedsPlongcODetectormUgR(void *p);
   static void destruct_maplEunsignedsPlongcODetectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned long,Detector*>*)
   {
      map<unsigned long,Detector*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned long,Detector*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned long,Detector*>", -2, "map", 100,
                  typeid(map<unsigned long,Detector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPlongcODetectormUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned long,Detector*>) );
      instance.SetNew(&new_maplEunsignedsPlongcODetectormUgR);
      instance.SetNewArray(&newArray_maplEunsignedsPlongcODetectormUgR);
      instance.SetDelete(&delete_maplEunsignedsPlongcODetectormUgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPlongcODetectormUgR);
      instance.SetDestructor(&destruct_maplEunsignedsPlongcODetectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned long,Detector*> >()));

      ::ROOT::AddClassAlternate("map<unsigned long,Detector*>","std::map<unsigned long, Detector*, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Detector*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned long,Detector*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPlongcODetectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned long,Detector*>*)0x0)->GetClass();
      maplEunsignedsPlongcODetectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPlongcODetectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPlongcODetectormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Detector*> : new map<unsigned long,Detector*>;
   }
   static void *newArray_maplEunsignedsPlongcODetectormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Detector*>[nElements] : new map<unsigned long,Detector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPlongcODetectormUgR(void *p) {
      delete ((map<unsigned long,Detector*>*)p);
   }
   static void deleteArray_maplEunsignedsPlongcODetectormUgR(void *p) {
      delete [] ((map<unsigned long,Detector*>*)p);
   }
   static void destruct_maplEunsignedsPlongcODetectormUgR(void *p) {
      typedef map<unsigned long,Detector*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned long,Detector*>

namespace ROOT {
   static TClass *maplEunsignedsPlongcOChannelgR_Dictionary();
   static void maplEunsignedsPlongcOChannelgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPlongcOChannelgR(void *p = 0);
   static void *newArray_maplEunsignedsPlongcOChannelgR(Long_t size, void *p);
   static void delete_maplEunsignedsPlongcOChannelgR(void *p);
   static void deleteArray_maplEunsignedsPlongcOChannelgR(void *p);
   static void destruct_maplEunsignedsPlongcOChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned long,Channel>*)
   {
      map<unsigned long,Channel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned long,Channel>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned long,Channel>", -2, "map", 100,
                  typeid(map<unsigned long,Channel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPlongcOChannelgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned long,Channel>) );
      instance.SetNew(&new_maplEunsignedsPlongcOChannelgR);
      instance.SetNewArray(&newArray_maplEunsignedsPlongcOChannelgR);
      instance.SetDelete(&delete_maplEunsignedsPlongcOChannelgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPlongcOChannelgR);
      instance.SetDestructor(&destruct_maplEunsignedsPlongcOChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned long,Channel> >()));

      ::ROOT::AddClassAlternate("map<unsigned long,Channel>","std::map<unsigned long, Channel, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Channel> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<unsigned long,Channel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPlongcOChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned long,Channel>*)0x0)->GetClass();
      maplEunsignedsPlongcOChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPlongcOChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPlongcOChannelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Channel> : new map<unsigned long,Channel>;
   }
   static void *newArray_maplEunsignedsPlongcOChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned long,Channel>[nElements] : new map<unsigned long,Channel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPlongcOChannelgR(void *p) {
      delete ((map<unsigned long,Channel>*)p);
   }
   static void deleteArray_maplEunsignedsPlongcOChannelgR(void *p) {
      delete [] ((map<unsigned long,Channel>*)p);
   }
   static void destruct_maplEunsignedsPlongcOChannelgR(void *p) {
      typedef map<unsigned long,Channel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned long,Channel>

namespace ROOT {
   static TClass *maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR_Dictionary();
   static void maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p);
   static void deleteArray_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p);
   static void destruct_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,pair<unsigned long,BeamDataPoint> >*)
   {
      map<string,pair<unsigned long,BeamDataPoint> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,pair<unsigned long,BeamDataPoint> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,pair<unsigned long,BeamDataPoint> >", -2, "map", 100,
                  typeid(map<string,pair<unsigned long,BeamDataPoint> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,pair<unsigned long,BeamDataPoint> >) );
      instance.SetNew(&new_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR);
      instance.SetDelete(&delete_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,pair<unsigned long,BeamDataPoint> > >()));

      ::ROOT::AddClassAlternate("map<string,pair<unsigned long,BeamDataPoint> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<unsigned long, BeamDataPoint>, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::pair<unsigned long, BeamDataPoint> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,pair<unsigned long,BeamDataPoint> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,pair<unsigned long,BeamDataPoint> >*)0x0)->GetClass();
      maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<unsigned long,BeamDataPoint> > : new map<string,pair<unsigned long,BeamDataPoint> >;
   }
   static void *newArray_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,pair<unsigned long,BeamDataPoint> >[nElements] : new map<string,pair<unsigned long,BeamDataPoint> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p) {
      delete ((map<string,pair<unsigned long,BeamDataPoint> >*)p);
   }
   static void deleteArray_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p) {
      delete [] ((map<string,pair<unsigned long,BeamDataPoint> >*)p);
   }
   static void destruct_maplEstringcOpairlEunsignedsPlongcOBeamDataPointgRsPgR(void *p) {
      typedef map<string,pair<unsigned long,BeamDataPoint> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,pair<unsigned long,BeamDataPoint> >

namespace ROOT {
   static TClass *maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR_Dictionary();
   static void maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p);
   static void deleteArray_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p);
   static void destruct_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,map<unsigned long,Detector> >*)
   {
      map<string,map<unsigned long,Detector> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,map<unsigned long,Detector> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,map<unsigned long,Detector> >", -2, "map", 100,
                  typeid(map<string,map<unsigned long,Detector> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,map<unsigned long,Detector> >) );
      instance.SetNew(&new_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR);
      instance.SetDelete(&delete_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,map<unsigned long,Detector> > >()));

      ::ROOT::AddClassAlternate("map<string,map<unsigned long,Detector> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::map<unsigned long, Detector, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Detector> > >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::map<unsigned long, Detector, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Detector> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,map<unsigned long,Detector> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,map<unsigned long,Detector> >*)0x0)->GetClass();
      maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<unsigned long,Detector> > : new map<string,map<unsigned long,Detector> >;
   }
   static void *newArray_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<unsigned long,Detector> >[nElements] : new map<string,map<unsigned long,Detector> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p) {
      delete ((map<string,map<unsigned long,Detector> >*)p);
   }
   static void deleteArray_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p) {
      delete [] ((map<string,map<unsigned long,Detector> >*)p);
   }
   static void destruct_maplEstringcOmaplEunsignedsPlongcODetectorgRsPgR(void *p) {
      typedef map<string,map<unsigned long,Detector> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,map<unsigned long,Detector> >

namespace ROOT {
   static TClass *maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR_Dictionary();
   static void maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p);
   static void deleteArray_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p);
   static void destruct_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,map<unsigned long,Detector*> >*)
   {
      map<string,map<unsigned long,Detector*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,map<unsigned long,Detector*> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,map<unsigned long,Detector*> >", -2, "map", 100,
                  typeid(map<string,map<unsigned long,Detector*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,map<unsigned long,Detector*> >) );
      instance.SetNew(&new_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR);
      instance.SetDelete(&delete_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,map<unsigned long,Detector*> > >()));

      ::ROOT::AddClassAlternate("map<string,map<unsigned long,Detector*> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::map<unsigned long, Detector*, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Detector*> > >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::map<unsigned long, Detector*, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, Detector*> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,map<unsigned long,Detector*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,map<unsigned long,Detector*> >*)0x0)->GetClass();
      maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<unsigned long,Detector*> > : new map<string,map<unsigned long,Detector*> >;
   }
   static void *newArray_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,map<unsigned long,Detector*> >[nElements] : new map<string,map<unsigned long,Detector*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p) {
      delete ((map<string,map<unsigned long,Detector*> >*)p);
   }
   static void deleteArray_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p) {
      delete [] ((map<string,map<unsigned long,Detector*> >*)p);
   }
   static void destruct_maplEstringcOmaplEunsignedsPlongcODetectormUgRsPgR(void *p) {
      typedef map<string,map<unsigned long,Detector*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,map<unsigned long,Detector*> >

namespace ROOT {
   static TClass *maplEstringcOboolgR_Dictionary();
   static void maplEstringcOboolgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolgR(void *p = 0);
   static void *newArray_maplEstringcOboolgR(Long_t size, void *p);
   static void delete_maplEstringcOboolgR(void *p);
   static void deleteArray_maplEstringcOboolgR(void *p);
   static void destruct_maplEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool>*)
   {
      map<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool>", -2, "map", 100,
                  typeid(map<string,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,bool>) );
      instance.SetNew(&new_maplEstringcOboolgR);
      instance.SetNewArray(&newArray_maplEstringcOboolgR);
      instance.SetDelete(&delete_maplEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolgR);
      instance.SetDestructor(&destruct_maplEstringcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool> >()));

      ::ROOT::AddClassAlternate("map<string,bool>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, bool> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,bool>*)0x0)->GetClass();
      maplEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool> : new map<string,bool>;
   }
   static void *newArray_maplEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,bool>[nElements] : new map<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolgR(void *p) {
      delete ((map<string,bool>*)p);
   }
   static void deleteArray_maplEstringcOboolgR(void *p) {
      delete [] ((map<string,bool>*)p);
   }
   static void destruct_maplEstringcOboolgR(void *p) {
      typedef map<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,bool>

namespace ROOT {
   static TClass *maplEstringcOBoostStoremUgR_Dictionary();
   static void maplEstringcOBoostStoremUgR_TClassManip(TClass*);
   static void *new_maplEstringcOBoostStoremUgR(void *p = 0);
   static void *newArray_maplEstringcOBoostStoremUgR(Long_t size, void *p);
   static void delete_maplEstringcOBoostStoremUgR(void *p);
   static void deleteArray_maplEstringcOBoostStoremUgR(void *p);
   static void destruct_maplEstringcOBoostStoremUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,BoostStore*>*)
   {
      map<string,BoostStore*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,BoostStore*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,BoostStore*>", -2, "map", 100,
                  typeid(map<string,BoostStore*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOBoostStoremUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,BoostStore*>) );
      instance.SetNew(&new_maplEstringcOBoostStoremUgR);
      instance.SetNewArray(&newArray_maplEstringcOBoostStoremUgR);
      instance.SetDelete(&delete_maplEstringcOBoostStoremUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOBoostStoremUgR);
      instance.SetDestructor(&destruct_maplEstringcOBoostStoremUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,BoostStore*> >()));

      ::ROOT::AddClassAlternate("map<string,BoostStore*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, BoostStore*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, BoostStore*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,BoostStore*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOBoostStoremUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,BoostStore*>*)0x0)->GetClass();
      maplEstringcOBoostStoremUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOBoostStoremUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOBoostStoremUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,BoostStore*> : new map<string,BoostStore*>;
   }
   static void *newArray_maplEstringcOBoostStoremUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,BoostStore*>[nElements] : new map<string,BoostStore*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOBoostStoremUgR(void *p) {
      delete ((map<string,BoostStore*>*)p);
   }
   static void deleteArray_maplEstringcOBoostStoremUgR(void *p) {
      delete [] ((map<string,BoostStore*>*)p);
   }
   static void destruct_maplEstringcOBoostStoremUgR(void *p) {
      typedef map<string,BoostStore*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,BoostStore*>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      ::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_DataModel_RootDict_Impl() {
    static const char* headers[] = {
"ADCPulse.h",
"ANNIEGeometry.h",
"ANNIERecoObjectTable.h",
"ANNIEalgorithms.h",
"ANNIEconstants.h",
"BeamDataPoint.h",
"BeamStatus.h",
"BeamStatusClass.h",
"CalibratedADCWaveform.h",
"CardData.h",
"Channel.h",
"ChannelKey.h",
"DataModel.h",
"Detector.h",
"Direction.h",
"ExampleRoot.h",
"FoMCalculator.h",
"GenieInfo.h",
"Geometry.h",
"HeftyInfo.h",
"Hit.h",
"LAPPD.h",
"LAPPDHit.h",
"LAPPDPulse.h",
"MRDOut.h",
"MinibufferLabel.h",
"MinuitOptimizer.h",
"NnlsSolution.h",
"Paddle.h",
"Parameters.h",
"Particle.h",
"Position.h",
"PsecData.h",
"RecoCluster.h",
"RecoClusterDigit.h",
"RecoDigit.h",
"RecoRing.h",
"RecoVertex.h",
"RunTypeLabel.h",
"SlowControlMonitor.h",
"TimeClass.h",
"TrigTypeLabel.h",
"TriggerClass.h",
"TriggerData.h",
"VertexGeometry.h",
"WaterModel.h",
"Waveform.h",
0
    };
    static const char* includePaths[] = {
"/ANNIETools/MyToolAnalysis/ToolDAQ/zeromq-4.0.7/include/",
"/ANNIETools/MyToolAnalysis/ToolDAQ/boost_1_66_0/install/include",
"/ANNIETools/MyToolAnalysis/ToolDAQ/WCSimLib/include",
"/ANNIETools/MyToolAnalysis/ToolDAQ/GENIE-v3-master/src/Framework",
"/ANNIETools/MyToolAnalysis/ToolDAQ/GENIE-v3-master/src",
"/usr/include",
"/ANNIETools/MyToolAnalysis/ToolDAQ/Reweight-3_00_04_ub3//src",
"/ANNIETools/MyToolAnalysis/ToolDAQ/log4cpp/include",
"/ANNIETools/MyToolAnalysis/ToolDAQ/RATEventLib/include",
"../include",
"/ToolAnalysis/ToolDAQ/root-6.24.06/install/include/",
"/ANNIETools/MyToolAnalysis/DataModel/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataModel_RootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@ChannelKey.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChannelKey.h")))  __attribute__((annotate("$clingAutoload$ADCPulse.h")))  ChannelKey;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Hit.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Hit.h")))  __attribute__((annotate("$clingAutoload$ADCPulse.h")))  Hit;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Hit.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Hit.h")))  __attribute__((annotate("$clingAutoload$ADCPulse.h")))  MCHit;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@ADCPulse.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ADCPulse.h")))  ADCPulse;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@ANNIEGeometry.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ANNIEGeometry.h")))  ANNIEGeometry;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@ANNIERecoObjectTable.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ANNIERecoObjectTable.h")))  ANNIERecoObjectTable;
struct __attribute__((annotate(R"ATTRDUMP(file_name@@@BeamDataPoint.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BeamDataPoint.h")))  BeamDataPoint;
namespace boost{namespace serialization{template <class T> struct __attribute__((annotate("$clingAutoload$boost/serialization/version.hpp")))  __attribute__((annotate("$clingAutoload$ADCPulse.h")))  version;
}}
class __attribute__((annotate(R"ATTRDUMP(file_name@@@TimeClass.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TimeClass.h")))  __attribute__((annotate("$clingAutoload$BeamStatus.h")))  TimeClass;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@BeamStatus.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BeamStatus.h")))  BeamStatus;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@BeamStatusClass.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$BeamStatusClass.h")))  BeamStatusClass;
template <class T> class __attribute__((annotate("$clingAutoload$Waveform.h")))  __attribute__((annotate("$clingAutoload$CalibratedADCWaveform.h")))  Waveform;

class __attribute__((annotate(R"ATTRDUMP(file_name@@@CardData.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CardData.h")))  CardData;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Position.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Position.h")))  __attribute__((annotate("$clingAutoload$Channel.h")))  Position;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Position.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Position.h")))  __attribute__((annotate("$clingAutoload$Channel.h")))  FourVector;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Channel.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Channel.h")))  Channel;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@LAPPD.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LAPPD.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  LAPPD;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Direction.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Direction.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  Direction;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Detector.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Detector.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  Detector;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Paddle.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Paddle.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  Paddle;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Particle.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Particle.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  Particle;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Particle.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Particle.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  MCParticle;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Geometry.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Geometry.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  Geometry;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@HeftyInfo.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$HeftyInfo.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  HeftyInfo;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@LAPPDHit.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LAPPDHit.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  LAPPDHit;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@LAPPDHit.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LAPPDHit.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  MCLAPPDHit;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@TriggerClass.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TriggerClass.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  TriggerClass;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@RecoDigit.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RecoDigit.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  RecoDigit;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@Parameters.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Parameters.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  Parameters;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@RecoVertex.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RecoVertex.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  RecoVertex;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@RecoRing.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RecoRing.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  RecoRing;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@MRDOut.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MRDOut.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  MRDOut;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@LAPPDPulse.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LAPPDPulse.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  LAPPDPulse;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@TriggerData.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TriggerData.h")))  __attribute__((annotate("$clingAutoload$DataModel.h")))  TriggerData;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@DataModel.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$DataModel.h")))  DataModel;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@ExampleRoot.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ExampleRoot.h")))  ExampleRoot;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@WaterModel.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$WaterModel.h")))  __attribute__((annotate("$clingAutoload$FoMCalculator.h")))  WaterModel;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@VertexGeometry.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$VertexGeometry.h")))  __attribute__((annotate("$clingAutoload$FoMCalculator.h")))  VertexGeometry;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@FoMCalculator.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FoMCalculator.h")))  FoMCalculator;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@GenieInfo.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$GenieInfo.h")))  GenieInfo;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@MinuitOptimizer.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MinuitOptimizer.h")))  MinuitOptimizer;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@NnlsSolution.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$NnlsSolution.h")))  NnlsSolution;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@PsecData.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PsecData.h")))  PsecData;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@RecoCluster.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RecoCluster.h")))  RecoCluster;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@RecoClusterDigit.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RecoClusterDigit.h")))  RecoClusterDigit;
class __attribute__((annotate(R"ATTRDUMP(file_name@@@SlowControlMonitor.h)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(pattern@@@*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$SlowControlMonitor.h")))  SlowControlMonitor;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataModel_RootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ADCPulse.h"
#include "ANNIEGeometry.h"
#include "ANNIERecoObjectTable.h"
#include "ANNIEalgorithms.h"
#include "ANNIEconstants.h"
#include "BeamDataPoint.h"
#include "BeamStatus.h"
#include "BeamStatusClass.h"
#include "CalibratedADCWaveform.h"
#include "CardData.h"
#include "Channel.h"
#include "ChannelKey.h"
#include "DataModel.h"
#include "Detector.h"
#include "Direction.h"
#include "ExampleRoot.h"
#include "FoMCalculator.h"
#include "GenieInfo.h"
#include "Geometry.h"
#include "HeftyInfo.h"
#include "Hit.h"
#include "LAPPD.h"
#include "LAPPDHit.h"
#include "LAPPDPulse.h"
#include "MRDOut.h"
#include "MinibufferLabel.h"
#include "MinuitOptimizer.h"
#include "NnlsSolution.h"
#include "Paddle.h"
#include "Parameters.h"
#include "Particle.h"
#include "Position.h"
#include "PsecData.h"
#include "RecoCluster.h"
#include "RecoClusterDigit.h"
#include "RecoDigit.h"
#include "RecoRing.h"
#include "RecoVertex.h"
#include "RunTypeLabel.h"
#include "SlowControlMonitor.h"
#include "TimeClass.h"
#include "TrigTypeLabel.h"
#include "TriggerClass.h"
#include "TriggerData.h"
#include "VertexGeometry.h"
#include "WaterModel.h"
#include "Waveform.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"", payloadCode, "@",
"ADCPulse", payloadCode, "@",
"ADC_IMPEDANCE", payloadCode, "@",
"ADC_TO_VOLT", payloadCode, "@",
"ANNIEGeometry", payloadCode, "@",
"ANNIEGeometry::EGeoRegion", payloadCode, "@",
"ANNIEGeometry::EGeoType", payloadCode, "@",
"ANNIERecoObjectTable", payloadCode, "@",
"BILLION", payloadCode, "@",
"BOGUS_INT", payloadCode, "@",
"BOOST_STORE_ASCII_FORMAT", payloadCode, "@",
"BOOST_STORE_BINARY_FORMAT", payloadCode, "@",
"BOOST_STORE_MULTIEVENT_FORMAT", payloadCode, "@",
"BeamDataPoint", payloadCode, "@",
"BeamStatus", payloadCode, "@",
"BeamStatusClass", payloadCode, "@",
"CardData", payloadCode, "@",
"Channel", payloadCode, "@",
"ChannelKey", payloadCode, "@",
"DataModel", payloadCode, "@",
"Detector", payloadCode, "@",
"Direction", payloadCode, "@",
"ExampleRoot", payloadCode, "@",
"FindPulseMax", payloadCode, "@",
"FoMCalculator", payloadCode, "@",
"FourVector", payloadCode, "@",
"GenieInfo", payloadCode, "@",
"Geometry", payloadCode, "@",
"GetStdoutFromCommand", payloadCode, "@",
"HeftyInfo", payloadCode, "@",
"Hit", payloadCode, "@",
"LAPPD", payloadCode, "@",
"LAPPDHit", payloadCode, "@",
"LAPPDPulse", payloadCode, "@",
"MCHit", payloadCode, "@",
"MCLAPPDHit", payloadCode, "@",
"MCParticle", payloadCode, "@",
"MILLION", payloadCode, "@",
"MRDOut", payloadCode, "@",
"MinuitOptimizer", payloadCode, "@",
"NS_PER_ADC_SAMPLE", payloadCode, "@",
"NnlsSolution", payloadCode, "@",
"Paddle", payloadCode, "@",
"Parameters", payloadCode, "@",
"Particle", payloadCode, "@",
"Particle::pdgcodetoname", payloadCode, "@",
"Position", payloadCode, "@",
"PsecData", payloadCode, "@",
"RecoCluster", payloadCode, "@",
"RecoClusterDigit", payloadCode, "@",
"RecoDigit", payloadCode, "@",
"RecoDigit::EDigitType", payloadCode, "@",
"RecoRing", payloadCode, "@",
"RecoVertex", payloadCode, "@",
"RecoVertex::EFitStatus", payloadCode, "@",
"SlowControlMonitor", payloadCode, "@",
"THOUSAND", payloadCode, "@",
"TimeClass", payloadCode, "@",
"TriggerClass", payloadCode, "@",
"TriggerData", payloadCode, "@",
"VertexGeometry", payloadCode, "@",
"WaterModel", payloadCode, "@",
"Waveform<double>", payloadCode, "@",
"boost::serialization::version<BeamDataPoint>", payloadCode, "@",
"boost::serialization::version<BeamDataPoint>::(anonymous)", payloadCode, "@",
"boost::serialization::version<BeamDataPoint>::value", payloadCode, "@",
"bregex_err_strings", payloadCode, "@",
"make_beam_condition_string", payloadCode, "@",
"minibuffer_label_to_string", payloadCode, "@",
"operator*", payloadCode, "@",
"operator+", payloadCode, "@",
"operator-", payloadCode, "@",
"operator<<", payloadCode, "@",
"regex_err_strings", payloadCode, "@",
"runtype_to_string", payloadCode, "@",
"trigtype_to_string", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataModel_RootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataModel_RootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataModel_RootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataModel_RootDict() {
  TriggerDictionaryInitialization_DataModel_RootDict_Impl();
}
