/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString, NSNumber;

@interface STShowStockOverviewRequest : AFSiriRequest {

	NSString* _name;
	NSString* _symbol;
	NSString* _exchange;
	NSNumber* _price;
	NSNumber* _high;
	NSNumber* _low;
	NSNumber* _change;
	NSNumber* _changePercent;
	NSString* _chartData;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)symbol;
-(id)price;
-(id)changePercent;
-(id)chartData;
-(id)exchange;
-(id)high;
-(id)low;
-(id)createResponse;
-(id)_initWithName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 price:(id)arg4 high:(id)arg5 low:(id)arg6 change:(id)arg7 changePercent:(id)arg8 chartData:(id)arg9 ;
-(id)change;
@end

