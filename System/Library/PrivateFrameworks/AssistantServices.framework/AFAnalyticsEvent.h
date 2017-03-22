/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	unsigned long long _machAbsoluteTime;
	long long _categoryType;
	NSDictionary* _context;

}

@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long machAbsoluteTime;              //@synthesize machAbsoluteTime=_machAbsoluteTime - In the implementation block
@property (nonatomic,readonly) long long categoryType;                           //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) NSDictionary * context;                           //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)categoryType;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)context;
-(id)initWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 categoryType:(long long)arg3 context:(id)arg4 ;
-(unsigned long long)machAbsoluteTime;
@end

