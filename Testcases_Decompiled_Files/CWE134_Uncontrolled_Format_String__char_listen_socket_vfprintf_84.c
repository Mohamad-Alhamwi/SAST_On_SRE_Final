
/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodB2G() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodB2G(void)

{
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G *this;
  long in_FS_OFFSET;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  this = (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G *)
         operator_new(8);
                    /* try { // try from 00101f5f to 00101f63 has its CatchHandler @ 00101f8e */
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G::
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G(this,local_88);
  if (this != (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G *)0x0) {
    CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G::
    ~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G(this);
    operator_delete(this,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void stdThreadLockAcquire(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void bad6(void)

{
  return;
}




void stdThreadLockDestroy(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B(char*)
    */

void __thiscall
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B
          (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B *this,
          char *param_1)

{
  undefined8 *puVar1;
  
  *(char **)this = param_1;
  puVar1 = *(undefined8 **)this;
  *puVar1 = 0x7274736465786966;
  puVar1[1] = 0x74736574676e69;
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G(char*)
    */

void __thiscall
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G
          (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G *this,
          char *param_1)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_44;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(char **)this = param_1;
  local_44 = -1;
  sVar2 = strlen(*(char **)this);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data[2] = '\0';
    local_28.sa_data[3] = '\0';
    local_28.sa_data[4] = '\0';
    local_28.sa_data[5] = '\0';
    local_28.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_44 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
      sVar3 = recv(local_44,(void *)(*(long *)this + sVar2),99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        *(undefined *)(*(long *)this + sVar2 + (long)iVar1) = 0;
        pcVar4 = strchr(*(char **)this,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(*(char **)this,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 main(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  printLine("Calling good()...");
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::good();
  printLine("Finished good()");
  printLine("Calling bad()...");
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::bad();
  printLine("Finished bad()");
  return 0;
}




void bad9(void)

{
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B::~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B()
    */

void __thiscall
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B::
~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B
          (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B *this)

{
  undefined in_CL;
  undefined in_R8B;
  undefined in_R9B;
  
  goodG2BVaSink(*(char **)this,(char)*(undefined8 *)this,(char)*(undefined8 *)this,in_CL,in_R8B,
                in_R9B);
  return;
}




void printShortLine(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void bad7(void)

{
  return;
}




void good3(void)

{
  return;
}




void printSizeTLine(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodG2BVaSink(char*, ...) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodG2BVaSink
               (char *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined param_7,...)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &param_7;
  local_c8 = local_b8;
  local_b0 = _param_2;
  local_a8 = _param_3;
  local_a0 = _param_4;
  local_98 = _param_5;
  local_90 = _param_6;
  vfprintf(stdout,param_1,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong decodeHexChars(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 globalReturnsTrue(void)

{
  return 1;
}




void good5(void)

{
  return;
}




void good9(void)

{
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::good() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::good(void)

{
  goodG2B();
  goodB2G();
  return;
}




void good1(void)

{
  return;
}




bool stdThreadJoin(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void bad5(void)

{
  return;
}




void good2(void)

{
  return;
}




undefined8 stdThreadCreate(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,internal_start,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




undefined8 stdThreadLockCreate(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodG2B() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodG2B(void)

{
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B *this;
  long in_FS_OFFSET;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  this = (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B *)
         operator_new(8);
                    /* try { // try from 00101e49 to 00101e4d has its CatchHandler @ 00101e78 */
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B::
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B(this,local_88);
  if (this != (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B *)0x0) {
    CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B::
    ~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodG2B(this);
    operator_delete(this,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 globalReturnsFalse(void)

{
  return 0;
}




int globalReturnsTrueOrFalse(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void bad2(void)

{
  return;
}




ulong decodeHexWChars(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void printLongLongLine(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ec0)();
  return;
}




void printHexCharLine(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void printBytesLine(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G::~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G()
    */

void __thiscall
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G::
~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G
          (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_goodB2G *this)

{
  undefined in_CL;
  undefined in_R8B;
  undefined in_R9B;
  
  goodB2GVaSink(*(char **)this,(char)*(undefined8 *)this,(char)*(undefined8 *)this,in_CL,in_R8B,
                in_R9B);
  return;
}




void printLine(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad::~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad()
    */

void __thiscall
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad::
~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad
          (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad *this)

{
  undefined in_CL;
  undefined in_R8B;
  undefined in_R9B;
  
  badVaSink(*(char **)this,(char)*(undefined8 *)this,(char)*(undefined8 *)this,in_CL,in_R8B,in_R9B);
  return;
}




void good8(void)

{
  return;
}




void printWcharLine(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void bad8(void)

{
  return;
}




void internal_start(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void good7(void)

{
  return;
}




void good6(void)

{
  return;
}




void printDoubleLine(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void printStructLine(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void bad1(void)

{
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::badVaSink(char*, ...) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::badVaSink
               (char *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined param_7,...)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &param_7;
  local_c8 = local_b8;
  local_b0 = _param_2;
  local_a8 = _param_3;
  local_a0 = _param_4;
  local_98 = _param_5;
  local_90 = _param_6;
  vfprintf(stdout,param_1,&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodB2GVaSink(char*, ...) */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::goodB2GVaSink
               (char *param_1,undefined param_2,undefined param_3,undefined param_4,
               undefined param_5,undefined param_6,undefined param_7,...)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &param_7;
  local_c8 = local_b8;
  local_b0 = _param_2;
  local_a8 = _param_3;
  local_a0 = _param_4;
  local_98 = _param_5;
  local_90 = _param_6;
  vfprintf(stdout,"%s",&local_d8);
  if (local_c0 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void printIntLine(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void printWLine(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 stdThreadDestroy(void *param_1)

{
  free(param_1);
  return 1;
}




void printHexUnsignedCharLine(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void good4(void)

{
  return;
}




void stdThreadLockRelease(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void printFloatLine(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void bad4(void)

{
  return;
}




void printUnsignedLine(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::bad() */

void CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::bad(void)

{
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad *this;
  long in_FS_OFFSET;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  this = (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad *)operator_new(8);
                    /* try { // try from 00101d33 to 00101d37 has its CatchHandler @ 00101d62 */
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad::
  CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad(this,local_88);
  if (this != (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad *)0x0) {
    CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad::
    ~CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad(this);
    operator_delete(this,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad::CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad(char*)
    */

void __thiscall
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad::
CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad
          (CWE134_Uncontrolled_Format_String__char_listen_socket_vfprintf_84_bad *this,char *param_1
          )

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_44;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(char **)this = param_1;
  local_44 = -1;
  sVar2 = strlen(*(char **)this);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data[2] = '\0';
    local_28.sa_data[3] = '\0';
    local_28.sa_data[4] = '\0';
    local_28.sa_data[5] = '\0';
    local_28.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_44 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
      sVar3 = recv(local_44,(void *)(*(long *)this + sVar2),99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        *(undefined *)(*(long *)this + sVar2 + (long)iVar1) = 0;
        pcVar4 = strchr(*(char **)this,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(*(char **)this,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void bad3(void)

{
  return;
}



