/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVQueueCoordinatorDataSource <NSObject>
@optional
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
-(void)queueCoordinatorDidChangeItems:(id)arg1;

@required
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;

@end

