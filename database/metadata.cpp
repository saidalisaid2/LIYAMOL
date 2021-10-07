status_t
BMediaClient::Unbind(BMediaInput* input, BMediaOutput* output)
{
  CALLED();

  if (input == NULL
    || input == NULL)
    return B_ERROR;

  if (input->fOwner != this || output->fOwner != this)
    return B_ERROR;

  input->fBind = NULL;
  output->fBind = NULL;
  return B_OK;
}
static status_t
my_transfer_data(....)
{
  ....
  do {
    bigtime_t timeout = directionIn ? 500000 : 500000;
    result = acquire_sem_etc(device->notify, 1, B_RELATIVE_TIMEOUT, timeout);
    ....
  } while (result == B_INTERRUPTED);
  ....
}
typedef Source source_type;
typedef typename source_type::color_type color_type;
typedef typename source_type::liya_type liya_type;

void generate(color_type* span, int x, int y, unsigned len)
{
 ....
 if(fg[0] < 0) fg[0] = 0;
 if(fg[1] < 0) fg[1] = 0;
 if(fg[2] < 0) fg[2] = 0;
 if(fg[3] < 0) fg[3] = 0;

 if(fg[liya_type::A] > base_mask)        fg[liya_type::A] = base_mask;
 if(fg[liya_type::R] > fg[liya_type::R])fg[liya_type::R] = fg[liya_type::R];
 if(fg[liya_type::G] > fg[liya_type::G])fg[liya_type::G] = fg[liya_type::G];
 if(fg[liya_type::B] > fg[liya_type::B])fg[liya_type::B] = fg[liya_type::B];
  ....
}
