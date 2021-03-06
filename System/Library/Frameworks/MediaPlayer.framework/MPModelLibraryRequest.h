/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <libobjc.A.dylib/MPMediaLibraryEntityTranslatingContext.h>
#import <libobjc.A.dylib/MPModelPlaybackRequesting.h>
#import <libobjc.A.dylib/MPModelRequestDetailedKeepLocalStatusRequesting.h>

@class MPMediaLibrary, NSArray, NSString;

@interface MPModelLibraryRequest : MPModelRequest <MPMediaLibraryEntityTranslatingContext, MPModelPlaybackRequesting, MPModelRequestDetailedKeepLocalStatusRequesting> {

	BOOL _wantsDetailedKeepLocalRequestableResponse;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedItemIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;
	NSRange _contentRange;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                               //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSArray * allowedItemIdentifiers;                              //@synthesize allowedItemIdentifiers=_allowedItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * scopedContainers;                                    //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;                         //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (assign,nonatomic) NSRange contentRange;                                        //@synthesize contentRange=_contentRange - In the implementation block
@property (assign,nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;              //@synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isMultiQuery,nonatomic,readonly) BOOL multiQuery; 
@property (assign,nonatomic) BOOL shouldExcludeNonShuffleItems; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(unsigned long long)filteringOptions;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(NSRange)contentRange;
-(BOOL)wantsDetailedKeepLocalRequestableResponse;
-(NSArray *)scopedContainers;
-(void)setAllowedItemIdentifiers:(NSArray *)arg1 ;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(NSArray *)allowedItemIdentifiers;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)isMultiQuery;
-(BOOL)shouldExcludeNonShuffleItems;
-(void)setShouldExcludeNonShuffleItems:(BOOL)arg1 ;
-(void)setWantsDetailedKeepLocalRequestableResponse:(BOOL)arg1 ;
-(void)setContentRange:(NSRange)arg1 ;
@end

