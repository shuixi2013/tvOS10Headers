/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate;
@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CNContactPropertyModel : NSObject {

	id _source;
	NSArray* _properties;
	NSMutableArray* _validProperties;
	id<CNContactPropertyModelDelegate> _delegate;
	id<CNContactPropertyRemoteModelDelegate> _remoteDelegate;
	NSMutableDictionary* _model;
	NSMutableArray* _transactions;

}

@property (nonatomic,retain) NSMutableDictionary * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactions;                                        //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * validProperties;                                     //@synthesize validProperties=_validProperties - In the implementation block
@property (nonatomic,retain) id source;                                                            //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSArray * properties;                                                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) id<CNContactPropertyModelDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CNContactPropertyRemoteModelDelegate> remoteDelegate;              //@synthesize remoteDelegate=_remoteDelegate - In the implementation block
-(void)setDelegate:(id<CNContactPropertyModelDelegate>)arg1 ;
-(id<CNContactPropertyModelDelegate>)delegate;
-(void)setSource:(id)arg1 ;
-(NSMutableDictionary *)model;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)source;
-(void)setProperties:(NSArray *)arg1 ;
-(NSArray *)properties;
-(void)setModel:(NSMutableDictionary *)arg1 ;
-(long long)sectionCount;
-(long long)rowCountForSection:(long long)arg1 ;
-(id)propertyForIndexPath:(id)arg1 ;
-(NSMutableArray *)validProperties;
-(id)resolvePendingTransactions;
-(void)setUpdatedTransactions:(id)arg1 ;
-(void)setRemoteDelegate:(id<CNContactPropertyRemoteModelDelegate>)arg1 ;
-(void)reloadModelFromSource;
-(void)noteTransactionsUpdated;
-(void)setValidProperties:(NSMutableArray *)arg1 ;
-(long long)sectionForProperty:(id)arg1 ;
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(id<CNContactPropertyRemoteModelDelegate>)remoteDelegate;
-(NSMutableArray *)transactions;
@end

