/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSMediaItem;
@class NSObject, NSSet, NSMutableDictionary;

@interface TVSSceneMediaItem : NSObject {

	NSObject*<TVSMediaItem> _mediaItem;
	NSSet* _localMetadataKeys;
	NSMutableDictionary* _localMetadata;

}

@property (nonatomic,retain) NSObject*<TVSMediaItem> mediaItem;                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) NSSet * localMetadataKeys;                        //@synthesize localMetadataKeys=_localMetadataKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localMetadata;              //@synthesize localMetadata=_localMetadata - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<TVSMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVSMediaItem>)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithMediaItem:(id)arg1 sceneTimeRange:(id)arg2 ;
-(NSSet *)localMetadataKeys;
-(void)setLocalMetadataKeys:(NSSet *)arg1 ;
-(NSMutableDictionary *)localMetadata;
-(void)setLocalMetadata:(NSMutableDictionary *)arg1 ;
@end

