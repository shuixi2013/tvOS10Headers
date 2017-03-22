/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, MiroMemory, NSString, MiroBlueprint, PHAsset, MiroPosterRequestOptions;

@interface MiroPosterRequest : NSObject {

	NSMutableArray* _scheduledRequestIDs;
	NSLock* _scheduledRequestIDsLock;
	NSMutableArray* _completionHandlers;
	NSLock* _completionHandlersLock;
	MiroMemory* _memory;
	NSString* _localizedTitle;
	NSString* _displaySubtitle;
	MiroBlueprint* _blueprint;
	PHAsset* _keyAsset;
	MiroPosterRequestOptions* _options;

}

@property (readonly) MiroMemory * memory;                                     //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSString * localizedTitle;                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * displaySubtitle;                      //@synthesize displaySubtitle=_displaySubtitle - In the implementation block
@property (nonatomic,retain) MiroBlueprint * blueprint;                       //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                              //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) MiroPosterRequestOptions * options;              //@synthesize options=_options - In the implementation block
-(MiroPosterRequestOptions *)options;
-(void)setOptions:(MiroPosterRequestOptions *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(MiroMemory *)memory;
-(MiroBlueprint *)blueprint;
-(void)setBlueprint:(MiroBlueprint *)arg1 ;
-(NSString *)displaySubtitle;
-(void)setDisplaySubtitle:(NSString *)arg1 ;
-(id)initWithMemory:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addScheduledRequestID:(id)arg1 ;
-(id)scheduledRequestIDs;
-(void)addCompletionHandlers:(id)arg1 ;
-(id)completionHandlers;
-(void)snapshotMemory;
-(BOOL)isUpToDate;
-(BOOL)isEqualToRequest:(id)arg1 ;
@end
