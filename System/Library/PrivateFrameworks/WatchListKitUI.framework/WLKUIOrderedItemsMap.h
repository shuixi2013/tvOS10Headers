/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLKUIOrderedItemsMapDelegate;
@class NSOrderedSet, NSDictionary;

@interface WLKUIOrderedItemsMap : NSObject {

	long long _dataSourceType;
	id<WLKUIOrderedItemsMapDelegate> _delegate;
	NSOrderedSet* _orderedKeys;
	NSDictionary* _mappingDictionary;

}

@property (assign,nonatomic) long long dataSourceType;                                      //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (nonatomic,copy) NSDictionary * mappingDictionary;                                //@synthesize mappingDictionary=_mappingDictionary - In the implementation block
@property (nonatomic,copy) NSOrderedSet * orderedKeys;                                      //@synthesize orderedKeys=_orderedKeys - In the implementation block
@property (assign,nonatomic,__weak) id<WLKUIOrderedItemsMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WLKUIOrderedItemsMapDelegate>)arg1 ;
-(id)init;
-(id<WLKUIOrderedItemsMapDelegate>)delegate;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeAll;
-(void)setDataSourceType:(long long)arg1 ;
-(long long)dataSourceType;
-(void)setOrderedKeys:(NSOrderedSet *)arg1 ;
-(void)setMappingDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)mappingDictionary;
-(void)_generateStoreIdentiferToIndexMapping:(id)arg1 generatesDifferentials:(BOOL)arg2 ;
-(id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2 ;
-(NSOrderedSet *)orderedKeys;
-(void)processEntities:(id)arg1 forDataSourceType:(long long)arg2 ;
-(void)updateEntities:(id)arg1 ;
@end

