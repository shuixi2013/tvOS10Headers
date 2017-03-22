/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface RTLocation : NSObject <NSCopying, NSSecureCoding> {

	int _referenceFrame;
	double _latitude;
	double _longitude;
	double _uncertainty;
	NSDate* _date;

}

@property (nonatomic,readonly) double latitude;                 //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double uncertainty;              //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int referenceFrame;              //@synthesize referenceFrame=_referenceFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)referenceFrame;
-(double)latitude;
-(double)longitude;
-(double)uncertainty;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 referenceFrame:(int)arg5 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 date:(id)arg4 ;
@end

