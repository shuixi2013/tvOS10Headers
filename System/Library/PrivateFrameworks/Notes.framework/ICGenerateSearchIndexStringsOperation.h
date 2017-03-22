/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICSearchIndexableIdentifier, NSMutableArray;

@interface ICGenerateSearchIndexStringsOperation : NSOperation {

	ICSearchIndexableIdentifier* _searchIndexableIdentifier;
	NSMutableArray* _mutableSearchStrings;

}

@property (nonatomic,retain) NSMutableArray * mutableSearchStrings;                              //@synthesize mutableSearchStrings=_mutableSearchStrings - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifier * searchIndexableIdentifier;              //@synthesize searchIndexableIdentifier=_searchIndexableIdentifier - In the implementation block
-(id)init;
-(void)setMutableSearchStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSearchStrings;
-(void)addStrings:(id)arg1 ;
-(ICSearchIndexableIdentifier *)searchIndexableIdentifier;
-(void)setSearchIndexableIdentifier:(ICSearchIndexableIdentifier *)arg1 ;
-(id)searchStrings;
@end
