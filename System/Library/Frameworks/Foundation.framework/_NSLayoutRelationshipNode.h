/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutRelationship, _NSLayoutRelationshipNodeParent;
@interface _NSLayoutRelationshipNode : NSObject {

	id<NSLayoutRelationship> _representedRelationship;
	id<_NSLayoutRelationshipNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRelationship> representedRelationship;              //@synthesize representedRelationship=_representedRelationship - In the implementation block
@property (assign) id<_NSLayoutRelationshipNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(id)initWithRelationship:(id)arg1 ;
-(id<NSLayoutRelationship>)representedRelationship;
-(void)setRepresentedRelationship:(id<NSLayoutRelationship>)arg1 ;
-(void)setParentNode:(id<_NSLayoutRelationshipNodeParent>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<_NSLayoutRelationshipNodeParent>)parentNode;
@end

