/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface TVSAppCachePurgeRequest : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresAppTermination;
	NSURL* _cacheURL;
	long long _urgency;
	long long _cacheType;

}

@property (nonatomic,readonly) NSURL * cacheURL;                       //@synthesize cacheURL=_cacheURL - In the implementation block
@property (assign,nonatomic) long long urgency;                        //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic) long long cacheType;                      //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL requiresAppTermination;              //@synthesize requiresAppTermination=_requiresAppTermination - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)cacheType;
-(void)setCacheType:(long long)arg1 ;
-(long long)urgency;
-(void)setUrgency:(long long)arg1 ;
-(id)initWithCacheURL:(id)arg1 ;
-(void)setRequiresAppTermination:(BOOL)arg1 ;
-(NSURL *)cacheURL;
-(BOOL)requiresAppTermination;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)propertyListRepresentation;
@end

