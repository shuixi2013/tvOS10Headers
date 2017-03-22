/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSNavigationDocument.h>
@class NSArray;


@protocol IKJSNavigationDocument <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(void)clear;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)presentModal:(id)arg1 :(id)arg2;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)popDocument;
-(NSArray *)documents;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;
-(void)dismissModal;

@end


@protocol IKAppNavigationController;
@class NSArray;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument> {

	id<IKAppNavigationController> _navigationControllerDelegate;

}

@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain,readonly) NSArray * documents; 
-(void)clear;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(id)_makeAppDocumentWithDocument:(id)arg1 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)presentModal:(id)arg1 :(id)arg2 ;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)popDocument;
-(NSArray *)documents;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(void)dismissModal;
@end

