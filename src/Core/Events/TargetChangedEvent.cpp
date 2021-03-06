#include "TargetChangedEvent.h"

#include "Global.h"

TargetChangedEvent::TargetChangedEvent(const QString& target)
    : QEvent(static_cast<QEvent::Type>(Enum::EventType::TargetChanged)), target(target)
{
}

const QString& TargetChangedEvent::getTarget() const
{
    return this->target;
}
