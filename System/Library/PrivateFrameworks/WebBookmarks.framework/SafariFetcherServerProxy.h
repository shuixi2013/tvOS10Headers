/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol WebBookmarksClientDelegateProtocol;
@class WebBookmarksXPCConnection, NSString;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;
	id<WebBookmarksClientDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WebBookmarksClientDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<WebBookmarksClientDelegateProtocol>)arg1 ;
-(id)init;
-(id<WebBookmarksClientDelegateProtocol>)delegate;
-(void)clearReadingListArchiveWithUUID:(id)arg1 ;
-(void)clearAllReadingListArchives;
-(void)startReadingListFetcher;
-(void)didFinishFetching;
-(void)didUpdateProgressWithMessage:(id)arg1 ;
-(void)didStartFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)didStopFetchingReadingListItemWithMessage:(id)arg1 ;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
@end

