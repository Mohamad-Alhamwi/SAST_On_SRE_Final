
void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101470();
    DAT_00105020 = 1;
    return;
  }
  return;
}




ulong FUN_00101fe6(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103120,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101bf2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d1e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001021fa(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001021c3,local_18);
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




void FUN_00101c72(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101893(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001018be to 001018c2 has its CatchHandler @ 001018e7 */
  FUN_0010152a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101550(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_0010216b(void)

{
  return;
}




undefined8 FUN_00102345(undefined8 *param_1)

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




void FUN_00101e4f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010198d(void)

{
  FUN_00101893();
  FUN_00101910();
  return;
}




void FUN_00101cc8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c18(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101df6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102129(void)

{
  return;
}




void FUN_00101e21(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_001021a2(void)

{
  return;
}




void FUN_001024a0(void)

{
  return;
}




void FUN_00102113(void)

{
  return;
}




void FUN_00102155(void)

{
  return;
}




void FUN_00101910(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 0010193b to 0010193f has its CatchHandler @ 00101964 */
  FUN_0010161e(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_0010173a(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




undefined8 FUN_00102322(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102430(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00102197(void)

{
  return;
}




void FUN_00101c4a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101dce(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101550(int *param_1)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if (*param_1 < 0) {
    FUN_00101bf2("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101c4a(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_0010173a(int *param_1)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if ((*param_1 < 0) || (9 < *param_1)) {
    FUN_00101bf2("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101c4a(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102134(void)

{
  return;
}




void FUN_001023fc(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d49(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001021b8(void)

{
  return;
}




void FUN_00101816(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101841 to 00101845 has its CatchHandler @ 0010186a */
  FUN_00101a08(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101b24(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00102160(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed0)();
  return;
}




void FUN_0010161e(int *param_1,int param_2)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(__fd,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        iVar1 = atoi(local_1e);
        *param_1 = iVar1;
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001020c5(void)

{
  return 1;
}




void FUN_00102176(void)

{
  return;
}




bool FUN_001022c7(pthread_t *param_1)

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




void FUN_001023dd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101cf3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e82(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010214a(void)

{
  return;
}




undefined8 FUN_001020d4(void)

{
  return 0;
}




undefined8 FUN_001019a2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101bf2("Calling good()...");
  FUN_0010198d();
  FUN_00101bf2("Finished good()");
  FUN_00101bf2("Calling bad()...");
  FUN_00101816();
  FUN_00101bf2("Finished bad()");
  return 0;
}




int FUN_001020e3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001020fd(void)

{
  return;
}




void FUN_0010213f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_0010218c(void)

{
  return;
}




void FUN_001023be(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010152a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 7;
  return;
}




void FUN_00101d74(undefined4 param_1)

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




void FUN_001021ad(void)

{
  return;
}




void FUN_0010211e(void)

{
  return;
}




void FUN_001021c3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_00101ee2(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103118,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102108(void)

{
  return;
}




void FUN_00101b24(int *param_1)

{
  void *__ptr;
  int local_14;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
  }
  if (*param_1 < 0) {
    FUN_00101bf2("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)*param_1 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101c4a(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00102181(void)

{
  return;
}




void FUN_00101c9e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a08(int *param_1,int param_2)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(__fd,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        iVar1 = atoi(local_1e);
        *param_1 = iVar1;
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



