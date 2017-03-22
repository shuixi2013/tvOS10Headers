/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTSourceAudio : RTSource <NSSecureCoding, NSCopying> {

	NSString* _deviceName;
	long long _audioSource;

}

@property (nonatomic,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long audioSource;              //@synthesize audioSource=_audioSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowedKeys;
+(id)stringFromAudioSource:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)audioSource;
-(NSString *)deviceName;
-(id)initWithDeviceName:(id)arg1 audioSource:(long long)arg2 ;
@end

