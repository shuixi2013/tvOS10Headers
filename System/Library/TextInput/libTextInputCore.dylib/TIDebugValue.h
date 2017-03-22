/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIDebugValue : NSObject {

	float defaultValue;
	float sweepValue;
	float sweepMin;
	float sweepMax;
	float stepSize;

}

@property (assign,nonatomic) float defaultValue; 
@property (assign,nonatomic) float sweepValue; 
@property (assign,nonatomic) float sweepMin; 
@property (assign,nonatomic) float sweepMax; 
@property (assign,nonatomic) float stepSize; 
-(float)defaultValue;
-(void)setDefaultValue:(float)arg1 ;
-(float)sweepValue;
-(float)sweepMin;
-(float)sweepMax;
-(void)setSweepValue:(float)arg1 ;
-(void)setSweepMin:(float)arg1 ;
-(void)setSweepMax:(float)arg1 ;
-(void)setStepSize:(float)arg1 ;
-(float)stepSize;
@end

