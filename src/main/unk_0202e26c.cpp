#include "types.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"



class SpNpcTalkRequest : public ActorTalkRequest {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

SpNpcTalkRequest::SpNpcTalkRequest() {}

SpNpcTalkRequest::~SpNpcTalkRequest() {}
