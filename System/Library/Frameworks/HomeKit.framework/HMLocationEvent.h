/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/_HMLocationHandlerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLRegion;

@interface HMLocationEvent : HMEvent <_HMLocationHandlerDelegate, NSSecureCoding> {

	int _locationAuthorization;
	CLRegion* _region;

}

@property (assign,nonatomic) int locationAuthorization;              //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (nonatomic,retain) CLRegion * region;                      //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRegion:(CLRegion *)arg1 ;
-(CLRegion *)region;
-(void)_configure:(id)arg1 eventTrigger:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 ;
-(void)_updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didUpdateAuthorization:(int)arg1 ;
-(void)updateRegion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithRegion:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
@end

