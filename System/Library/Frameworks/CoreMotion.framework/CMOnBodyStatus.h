/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMOnBodyStatus : CMLogItem {

	int fResult;
	int fConfidence;

}

@property (nonatomic,readonly) long long result; 
@property (nonatomic,readonly) long long confidence; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)confidence;
-(long long)result;
-(id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3 ;
@end

