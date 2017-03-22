/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVDataQueryViewController.h>
#import <TVKit/TVDataQueryViewControllerDelegate.h>

@class NSString;

@interface TVMusicPlaybackDataQueryViewController : TVDataQueryViewController <TVDataQueryViewControllerDelegate> {

	BOOL _shuffle;
	unsigned long long _startIndex;

}

@property (assign,nonatomic) unsigned long long startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL shuffle;                               //@synthesize shuffle=_shuffle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStartIndex:(unsigned long long)arg1 ;
-(unsigned long long)startIndex;
-(BOOL)shuffle;
-(id)initWithDataClientResultsController:(id)arg1 ;
-(unsigned long long)dataQueryViewController:(id)arg1 didChangeResultsForQuery:(id)arg2 ;
-(void)setShuffle:(BOOL)arg1 ;
@end

