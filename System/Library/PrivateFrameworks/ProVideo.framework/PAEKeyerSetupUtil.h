/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyerLumaSetup, PAEKeyerCbCrSetup;

@interface PAEKeyerSetupUtil : NSObject {

	id _apiManager;
	PAEKeyerOMKeyer2D* _omKeyer;
	PAEKeyerLumaSetup* _keyerLumaSetup;
	PAEKeyerCbCrSetup* _keyerCbCrSetup;
	id _actionAPI;
	id _getAPI;
	id _setAPI;

}
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 atTime:(/*function pointer*/void**)arg2 ;
-(PAEKeyerOMKeyer2D*)omKeyer;
-(double)autoAdjustSoftGap;
-(BOOL)tight;
-(double)shadowsGain;
-(double)highlightsGain;
-(double)spreadGain;
-(void)syncWithDB:(/*function pointer*/void**)arg1 setAsDefault:(BOOL)arg2 ;
-(void)getDataFromDB:(/*function pointer*/void**)arg1 ;
-(void)removeKeyframeAtTime:(/*function pointer*/void**)arg1 forParam:(int)arg2 withAPI:(id)arg3 ;
-(void)syncChromaWithDB:(/*function pointer*/void**)arg1 ;
-(void)syncLumaWithDB:(/*function pointer*/void**)arg1 ;
-(void)removeKeyframeAtTime:(/*function pointer*/void**)arg1 ;
-(BOOL)addTolerance;
-(void)setAddTolerance:(BOOL)arg1 ;
-(BOOL)defineEdge;
-(void)setDefineEdge:(BOOL)arg1 ;
-(BOOL)autoScale;
-(double)simpleKeyAmount;
-(BOOL)keyerActiveAt:(/*function pointer*/void**)arg1 ;
-(double)autoKeySoftness;
@end

