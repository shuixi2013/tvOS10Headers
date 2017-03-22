/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {

	TextTrackRepresentationCocoa* _parent;

}

@property (assign) TextTrackRepresentationCocoa* parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TextTrackRepresentationCocoa*)parent;
-(id)initWithParent:(TextTrackRepresentationCocoa*)arg1 ;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setParent:(TextTrackRepresentationCocoa*)arg1 ;
@end

