/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol INSetSeatSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enableHeating; 
@property (nonatomic,copy) NSNumber * enableCooling; 
@property (nonatomic,copy) NSNumber * enableMassage; 
@property (assign,nonatomic) long long seat; 
@property (nonatomic,copy) NSNumber * level; 
@property (assign,nonatomic) long long relativeLevelSetting; 
@required
-(id)init;
-(void)setLevel:(id)arg1;
-(NSNumber *)level;
-(void)setEnableHeating:(id)arg1;
-(void)setEnableCooling:(id)arg1;
-(void)setEnableMassage:(id)arg1;
-(void)setSeat:(long long)arg1;
-(void)setRelativeLevelSetting:(long long)arg1;
-(NSNumber *)enableHeating;
-(NSNumber *)enableCooling;
-(NSNumber *)enableMassage;
-(long long)seat;
-(long long)relativeLevelSetting;

@end

