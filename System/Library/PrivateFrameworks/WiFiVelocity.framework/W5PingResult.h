/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _address;
	NSString* _interfaceName;
	long long _count;
	double _packetLoss;
	double _min;
	double _max;
	double _avg;
	double _stddev;
	double _timestamp;

}

@property (nonatomic,copy) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) long long count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) double packetLoss;                   //@synthesize packetLoss=_packetLoss - In the implementation block
@property (assign,nonatomic) double min;                          //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                          //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double avg;                          //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) double stddev;                       //@synthesize stddev=_stddev - In the implementation block
@property (assign,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMax:(double)arg1 ;
-(double)max;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)count;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(long long)arg1 ;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(void)setAvg:(double)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(double)min;
-(double)avg;
-(double)stddev;
-(void)setMin:(double)arg1 ;
-(double)packetLoss;
-(void)setPacketLoss:(double)arg1 ;
-(void)setStddev:(double)arg1 ;
@end

