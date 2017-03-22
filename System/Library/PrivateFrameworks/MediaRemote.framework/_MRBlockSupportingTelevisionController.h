/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRTelevisionController.h>
#import <libobjc.A.dylib/MRTelevisionDelegate.h>

@class _MRTelevisionControllerBlockCallback, NSString;

@interface _MRBlockSupportingTelevisionController : MRTelevisionController <MRTelevisionDelegate> {

	_MRTelevisionControllerBlockCallback* _discoveryCallback;
	_MRTelevisionControllerBlockCallback* _removalCallback;

}

@property (nonatomic,retain) _MRTelevisionControllerBlockCallback * discoveryCallback;              //@synthesize discoveryCallback=_discoveryCallback - In the implementation block
@property (nonatomic,retain) _MRTelevisionControllerBlockCallback * removalCallback;                //@synthesize removalCallback=_removalCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)televisionController:(id)arg1 didRemoveTelevision:(id)arg2 ;
-(void)televisionController:(id)arg1 didDiscoverTelevision:(id)arg2 ;
-(_MRTelevisionControllerBlockCallback *)discoveryCallback;
-(void)setDiscoveryCallback:(_MRTelevisionControllerBlockCallback *)arg1 ;
-(_MRTelevisionControllerBlockCallback *)removalCallback;
-(void)setRemovalCallback:(_MRTelevisionControllerBlockCallback *)arg1 ;
@end

