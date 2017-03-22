/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKDOMObserver.h>
#import <libobjc.A.dylib/IKJSDOMNodeList.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList> {

	IKDOMNode* _contextNode;
	/*^block*/id _evaluationBlock;
	NSArray* _nodes;

}

@property (nonatomic,retain) IKDOMNode * contextNode;                //@synthesize contextNode=_contextNode - In the implementation block
@property (nonatomic,copy,readonly) id evaluationBlock;              //@synthesize evaluationBlock=_evaluationBlock - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                          //@synthesize nodes=_nodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long length; 
+(id)nodeListWithAppContext:(id)arg1 contextNode:(id)arg2 xpath:(id)arg3 ;
-(long long)length;
-(id)item:(long long)arg1 ;
-(void)setNodes:(NSArray *)arg1 ;
-(id)initWithAppContext:(id)arg1 contextNode:(id)arg2 evaluationBlock:(/*^block*/id)arg3 ;
-(void)_updateNodes;
-(id)evaluationBlock;
-(IKDOMNode *)contextNode;
-(void)domDidUpdateForContextNode:(id)arg1 ;
-(void)setContextNode:(IKDOMNode *)arg1 ;
-(NSArray *)nodes;
@end

