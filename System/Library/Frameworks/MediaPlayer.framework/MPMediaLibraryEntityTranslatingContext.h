/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPMediaLibrary, NSArray;


@protocol MPMediaLibraryEntityTranslatingContext <NSObject>
@property (nonatomic,readonly) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,readonly) NSArray * allowedItemIdentifiers; 
@property (nonatomic,readonly) NSArray * scopedContainers; 
@property (getter=isMultiQuery,nonatomic,readonly) BOOL multiQuery; 
@property (nonatomic,readonly) unsigned long long filteringOptions; 
@required
-(unsigned long long)filteringOptions;
-(MPMediaLibrary *)mediaLibrary;
-(NSArray *)scopedContainers;
-(NSArray *)allowedItemIdentifiers;
-(BOOL)isMultiQuery;

@end
