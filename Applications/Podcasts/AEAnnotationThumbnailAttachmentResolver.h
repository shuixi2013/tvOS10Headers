//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAttachmentResolving.h"
#import "IMCloudSyncAttachmentResolverDelegate.h"

@class AEAnnotationProvider, IMAVPlayer, IMAttachmentResolver, IMCloudSyncAttachmentResolver, IMCloudSyncController, IMImageCache, NSString;

@interface AEAnnotationThumbnailAttachmentResolver : NSObject <IMCloudSyncAttachmentResolverDelegate, IMAttachmentResolving>
{
    IMImageCache *_imageCache;	// 8 = 0x8
    IMCloudSyncController *_cloudSyncController;	// 16 = 0x10
    IMAVPlayer *_player;	// 24 = 0x18
    IMAttachmentResolver *_resolver;	// 32 = 0x20
    IMCloudSyncAttachmentResolver *_cloudSyncResolver;	// 40 = 0x28
    AEAnnotationProvider *_annotationProvider;	// 48 = 0x30
}

@property(retain, nonatomic) AEAnnotationProvider *annotationProvider; // @synthesize annotationProvider=_annotationProvider;
@property(retain, nonatomic) IMCloudSyncAttachmentResolver *cloudSyncResolver; // @synthesize cloudSyncResolver=_cloudSyncResolver;
@property(retain, nonatomic) IMAttachmentResolver *resolver; // @synthesize resolver=_resolver;
@property(readonly, retain, nonatomic) IMAVPlayer *player; // @synthesize player=_player;
@property(readonly, retain, nonatomic) IMCloudSyncController *cloudSyncController; // @synthesize cloudSyncController=_cloudSyncController;
@property(readonly, retain, nonatomic) IMImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void)attachmentResolver:(id)arg1 didUploadAttachmentInfo:(id)arg2;	// IMP=0x000000010022c8c8
- (void)attachmentResolver:(id)arg1 didDownloadData:(id)arg2 forAttachmentInfo:(id)arg3;	// IMP=0x000000010022c7dc
- (_Bool)canResolveAttachmentInfo:(id)arg1;	// IMP=0x000000010022c7a8
- (_Bool)supportsAttachmentResolvingOption:(int)arg1;	// IMP=0x000000010022c7a0
- (void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010022c644
- (void)thumbnailForAnnotation:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010022c4d4
- (id)thumbnailForAnnotation:(id)arg1;	// IMP=0x000000010022c410
- (void)dealloc;	// IMP=0x000000010022c330
- (id)initWithImageCache:(id)arg1 cloudSyncController:(id)arg2 player:(id)arg3;	// IMP=0x000000010022c0b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
