/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CKFlowControl : NSObject {

	unsigned long long _budgetCap;
	double _regenerationPerSecond;
	unsigned long long _totalSamples;
	double _totalCost;
	double _budget;
	double _maximumThrottleTime;
	NSDate* _lastRegeneration;

}

@property (assign) double budget;                                     //@synthesize budget=_budget - In the implementation block
@property (retain) NSDate * lastRegeneration;                         //@synthesize lastRegeneration=_lastRegeneration - In the implementation block
@property (assign) unsigned long long budgetCap;                      //@synthesize budgetCap=_budgetCap - In the implementation block
@property (assign) double regenerationPerSecond;                      //@synthesize regenerationPerSecond=_regenerationPerSecond - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;              //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
+(id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(id)description;
-(void)setBudgetCap:(unsigned long long)arg1 ;
-(void)setBudget:(double)arg1 ;
-(void)setRegenerationPerSecond:(double)arg1 ;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(void)setLastRegeneration:(NSDate *)arg1 ;
-(id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3 ;
-(void)regenerate;
-(double)budget;
-(double)_secondsUntilBudgetLimitationRemovedNoRegen;
-(unsigned long long)budgetCap;
-(double)regenerationPerSecond;
-(double)maximumThrottleTime;
-(NSDate *)lastRegeneration;
-(void)expendWithCost:(double)arg1 ;
-(id)CKPropertiesDescription;
-(double)secondsUntilBudgetLimitationRemoved;
-(BOOL)isLimited;
-(BOOL)attemptBudgetedExpenditureWithCost:(double)arg1 ;
@end

