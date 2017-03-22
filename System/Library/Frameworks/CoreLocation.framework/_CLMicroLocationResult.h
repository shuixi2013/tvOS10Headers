/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLMicroLocation;

@interface _CLMicroLocationResult : NSObject <NSCopying, NSSecureCoding> {

	_CLMicroLocation* _microlocation;
	double _probability;

}

@property (nonatomic,readonly) _CLMicroLocation * microlocation;              //@synthesize microlocation=_microlocation - In the implementation block
@property (nonatomic,readonly) double probability;                            //@synthesize probability=_probability - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)microLocationResultWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMicroLocation:(id)arg1 probability:(double)arg2 ;
-(_CLMicroLocation *)microlocation;
-(id)jsonObject;
-(double)probability;
@end

