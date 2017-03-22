/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVPhotoServiceInterface.h>

@protocol TVPhotoServerInterface, OS_dispatch_queue;
@class TVScreenSaverJSObject, NSMutableArray, NSObject, NSString;

@interface TVScreenSaverService : NSObject <TVPhotoServiceInterface> {

	TVScreenSaverJSObject* _screenSaverJSObject;
	id<TVPhotoServerInterface> _remotePhotoServerInterface;
	NSMutableArray* _requests;
	NSObject*<OS_dispatch_queue> _serialQueue;
	/*^block*/id _requestStartBlock;
	/*^block*/id _requestCompletionBlock;
	/*^block*/id _defaultRequestHandler;

}

@property (nonatomic,retain) TVScreenSaverJSObject * screenSaverJSObject; 
@property (copy) id requestStartBlock;                                                 //@synthesize requestStartBlock=_requestStartBlock - In the implementation block
@property (copy) id requestCompletionBlock;                                            //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (copy) id defaultRequestHandler;                                             //@synthesize defaultRequestHandler=_defaultRequestHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)requestCompletionBlock;
-(id)init;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)setScreenSaverJSObject:(TVScreenSaverJSObject *)arg1 ;
-(void)setRequestStartBlock:(id)arg1 ;
-(void)_respondToRequests;
-(id)requestStartBlock;
-(void)_addRequestWithOptions:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(id)_photoAssetsFromImageRequests:(id)arg1 ;
-(id)defaultRequestHandler;
-(id)_photoAssetsFromUrls:(id)arg1 commonHeaders:(id)arg2 ;
-(void)photoAssetsWithOptions:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)registerRemotePhotoServer:(id)arg1 ;
-(TVScreenSaverJSObject *)screenSaverJSObject;
-(void)setDefaultRequestHandler:(id)arg1 ;
@end

