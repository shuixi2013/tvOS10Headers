/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSProcess.h>
#import <libobjc.A.dylib/FBUIProcess.h>

@protocol FBUIProcess <FBSProcess>
@required
-(BOOL)isRunning;
-(BOOL)isApplicationProcess;
-(BOOL)isExtensionProcess;
-(BOOL)isSystemApplicationProcess;

@end


@class NSString;

@interface FBUIProcess : FBSProcess <FBUIProcess>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
-(BOOL)isRunning;
-(BOOL)isApplicationProcess;
-(BOOL)isExtensionProcess;
-(BOOL)isSystemApplicationProcess;
@end

