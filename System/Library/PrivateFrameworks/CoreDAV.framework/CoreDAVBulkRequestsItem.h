/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableSet, NSDictionary, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {

	CoreDAVLeafItem* _maxResourcesItem;
	CoreDAVLeafItem* _maxSizeItem;
	NSMutableSet* _supportedItems;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVLeafItem * maxResourcesItem;               //@synthesize maxResourcesItem=_maxResourcesItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * maxSizeItem;                    //@synthesize maxSizeItem=_maxSizeItem - In the implementation block
@property (nonatomic,readonly) NSSet * supportedItems;                         //@synthesize supportedItems=_supportedItems - In the implementation block
@property (nonatomic,readonly) long long maxResources; 
@property (nonatomic,readonly) long long maxSize; 
@property (nonatomic,readonly) BOOL supportsInsert; 
@property (nonatomic,readonly) BOOL supportsUpdate; 
@property (nonatomic,readonly) BOOL supportsDelete; 
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)maxSize;
-(NSDictionary *)dictRepresentation;
-(long long)maxResources;
-(void)setMaxResourcesItem:(CoreDAVLeafItem *)arg1 ;
-(void)setMaxSizeItem:(CoreDAVLeafItem *)arg1 ;
-(void)addSupportedItem:(id)arg1 ;
-(BOOL)supportsInsert;
-(BOOL)supportsUpdate;
-(BOOL)supportsDelete;
-(BOOL)supportsItemWithNameSpace:(id)arg1 name:(id)arg2 ;
-(CoreDAVLeafItem *)maxResourcesItem;
-(CoreDAVLeafItem *)maxSizeItem;
-(NSSet *)supportedItems;
@end

