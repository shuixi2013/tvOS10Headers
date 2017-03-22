/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet;

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _publisherDestination;
	long long _maximumCount;
	NSDate* _sinceDate;
	NSSet* _enabledSectionIDs;

}

@property (nonatomic,retain) NSDate * sinceDate;                                     //@synthesize sinceDate=_sinceDate - In the implementation block
@property (nonatomic,retain) NSSet * enabledSectionIDs;                              //@synthesize enabledSectionIDs=_enabledSectionIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long publisherDestination;              //@synthesize publisherDestination=_publisherDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCount; 
+(BOOL)supportsSecureCoding;
+(id)requestParametersForDestination:(unsigned long long)arg1 withSinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDestination:(unsigned long long)arg1 sinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4 ;
-(NSSet *)enabledSectionIDs;
-(unsigned long long)publisherDestination;
-(void)setSinceDate:(NSDate *)arg1 ;
-(void)setEnabledSectionIDs:(NSSet *)arg1 ;
-(unsigned long long)maximumCount;
-(NSDate *)sinceDate;
@end

