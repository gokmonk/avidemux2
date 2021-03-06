// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "lame_encoder.h"
bool  lame_encoder_jserialize(const char *file, const lame_encoder *key){
admJson json;
json.addUint32("bitrate",key->bitrate);
json.addUint32("preset",key->preset);
json.addUint32("quality",key->quality);
json.addBool("disableBitReservoir",key->disableBitReservoir);
return json.dumpToFile(file);
};
bool  lame_encoder_jdeserialize(const char *file, const ADM_paramList *tmpl,lame_encoder *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
