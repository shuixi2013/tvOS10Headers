/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NRDeviceDiff;

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding> {

	NRDeviceDiff* _diff;
	unsigned long long _changeType;

}

@property (nonatomic,readonly) NRDeviceDiff * diff;                        //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NRDeviceDiff *)diff;
-(id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2 ;
-(unsigned long long)changeType;
@end
