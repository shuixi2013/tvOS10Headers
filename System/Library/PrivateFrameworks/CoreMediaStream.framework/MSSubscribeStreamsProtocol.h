/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@interface MSSubscribeStreamsProtocol : MSStreamsProtocol {

	MSSSPCContext* _context;
	int _chunkIndex;
	_MSSSPCChunkParsingContext* _parseContext;

}
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)pollForSubscriptionUpdatesWithAccountAnchors:(id)arg1 ;
-(void)_parseChunks;
-(id)_pathToChunkIndex:(int)arg1 ;
-(void)_parseNextChunk;
-(id)_assetCollectionsFromCoreArray:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 suggestion:(id)arg2 ;
-(id)_assetFromCoreDictionary:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)_coreProtocolDidFinishError:(id)arg1 ;
-(void)_coreProtocolDidGetDataChunk:(id)arg1 ;
-(void)_coreProtocolDidFailAuthentication:(id)arg1 ;
-(void)_chunkDidBeginStreamForPersonID:(id)arg1 wasReset:(BOOL)arg2 metadata:(id)arg3 ;
-(void)_chunkDidParseAssetCollections:(id)arg1 forPersonID:(id)arg2 ;
-(void)_chunkDidEndStreamForPersonID:(id)arg1 ctag:(id)arg2 ;
-(void)_chunkDidFindSubscriptionGoneForPersonID:(id)arg1 ;
-(void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)arg1 ;
-(void)_chunkDidFindShareState:(id)arg1 ;
-(void)abort;
@end

