/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMTimedMetadataItem;

@interface MiroBeatMetadata : NSObject {

	FMTimedMetadataItem* _metadataItem;
	long long _priority;

}

@property (nonatomic,retain) FMTimedMetadataItem * metadataItem;              //@synthesize metadataItem=_metadataItem - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
+(id)beatWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
-(id)description;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setMetadataItem:(FMTimedMetadataItem *)arg1 ;
-(FMTimedMetadataItem *)metadataItem;
-(id)initWithMetadataItem:(id)arg1 andPriority:(long long)arg2 ;
@end

