/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSDataCollection, TVSDataClientResultsController, NSMutableArray, NSString, TVSImageProxy, NSArray;

@interface TVDataClientPlaylist : NSObject {

	TVSDataCollection* _dataCollection;
	TVSDataClientResultsController* _previewDataClientResultsController;
	NSMutableArray* _mutableChildPlaylists;
	unsigned long long _type;

}

@property (nonatomic,retain) TVSDataCollection * dataCollection;                                               //@synthesize dataCollection=_dataCollection - In the implementation block
@property (nonatomic,copy) NSMutableArray * mutableChildPlaylists;                                             //@synthesize mutableChildPlaylists=_mutableChildPlaylists - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) id parentIdentifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long playlistItemCount; 
@property (nonatomic,copy,readonly) NSString * playlistItemCountString; 
@property (nonatomic,readonly) long long placeholderAssetType; 
@property (nonatomic,readonly) TVSImageProxy * imageProxy; 
@property (nonatomic,copy,readonly) NSArray * childPlaylists; 
@property (nonatomic,retain) TVSDataClientResultsController * previewDataClientResultsController;              //@synthesize previewDataClientResultsController=_previewDataClientResultsController - In the implementation block
+(/*^block*/id)sortComparator;
-(id)init;
-(NSString *)name;
-(id)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(TVSImageProxy *)imageProxy;
-(id)parentIdentifier;
-(long long)placeholderAssetType;
-(id)initWithDataCollection:(id)arg1 ;
-(TVSDataCollection *)dataCollection;
-(NSArray *)childPlaylists;
-(void)addChildPlaylist:(id)arg1 ;
-(unsigned long long)playlistItemCount;
-(NSMutableArray *)mutableChildPlaylists;
-(NSString *)playlistItemCountString;
-(void)setDataCollection:(TVSDataCollection *)arg1 ;
-(TVSDataClientResultsController *)previewDataClientResultsController;
-(void)setPreviewDataClientResultsController:(TVSDataClientResultsController *)arg1 ;
-(void)setMutableChildPlaylists:(NSMutableArray *)arg1 ;
@end

