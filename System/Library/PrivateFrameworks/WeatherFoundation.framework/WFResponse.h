/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSError;

@interface WFResponse : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _type;
	NSError* _error;
	double _executionTime;

}

@property (assign,nonatomic) double executionTime;              //@synthesize executionTime=_executionTime - In the implementation block
@property (readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (retain) NSError * error;                             //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithIdentifier:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)type;
-(id)initWithIdentifier:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)executionTime;
-(void)setExecutionTime:(double)arg1 ;
@end

