/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;

}

@property (readonly) NSArray * devices; 
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
-(void)finalize;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)stop;
-(int)start;
-(id)internalDevices;
-(BOOL)isBrowsing;
-(NSArray *)devices;
@end

