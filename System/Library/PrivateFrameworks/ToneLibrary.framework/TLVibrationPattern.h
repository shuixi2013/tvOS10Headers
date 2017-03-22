/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {

	NSDictionary* _propertyListRepresentation;
	NSMutableArray* _complexPatternDescription;
	id _contextObject;

}

@property (nonatomic,readonly) id _artificiallyRepeatingPropertyListRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,retain) id contextObject;                                                   //@synthesize contextObject=_contextObject - In the implementation block
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)noneVibrationPattern;
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
-(id)init;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)propertyListRepresentation;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(double)_computedDuration;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(id)contextObject;
-(void)setContextObject:(id)arg1 ;
@end

