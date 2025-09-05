
void FUN_00101c60(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102104(void)

{
  return;
}




undefined8 FUN_00102041(void)

{
  return 0;
}




void FUN_001020a1(void)

{
  return;
}




void FUN_00102075(void)

{
  return;
}




void FUN_00101d8e(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001020e3(void)

{
  return;
}




void FUN_00101def(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010208b(void)

{
  return;
}




int FUN_00102050(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b5f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_001020cd(void)

{
  return;
}




undefined8 FUN_001022b2(undefined8 *param_1)

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




void FUN_001020d8(void)

{
  return;
}




void FUN_001015d8(int *param_1,int param_2)

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




void FUN_00101c0b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




bool FUN_00102234(pthread_t *param_1)

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




void FUN_001023a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101dbc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101928(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101b5f("Calling good()...");
  FUN_00101913();
  FUN_00101b5f("Finished good()");
  FUN_00101b5f("Calling bad()...");
  FUN_0010179c();
  FUN_00101b5f("Finished bad()");
  return 0;
}




void FUN_0010150a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *param_1 = 7;
  return;
}




void FUN_0010206a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00101b85(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001020c2(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101450();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101cb6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d3b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010198e(int *param_1,int param_2)

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




void FUN_0010232b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101819(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 00101844 to 00101848 has its CatchHandler @ 0010186d */
  FUN_0010150a(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101530(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_0010179c(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001017c7 to 001017cb has its CatchHandler @ 001017f0 */
  FUN_001015d8(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_001016f4(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_001020ac(void)

{
  return;
}




void FUN_00101d63(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102410(void)

{
  return;
}




void FUN_00101bb7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ce1(undefined4 param_1)

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




void FUN_0010210f(void)

{
  return;
}




void FUN_00101913(void)

{
  FUN_00101819();
  FUN_00101896();
  return;
}




void FUN_00101896(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(4);
                    /* try { // try from 001018c1 to 001018c5 has its CatchHandler @ 001018ea */
  FUN_0010198e(pvVar1,0xffffffff);
  if (pvVar1 != (void *)0x0) {
    FUN_00101aaa(pvVar1);
    operator_delete(pvVar1,4);
  }
  return;
}




void FUN_00102096(void)

{
  return;
}




void FUN_001020ee(void)

{
  return;
}




void FUN_00102369(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010211a(void)

{
  return;
}




ulong FUN_00101e4f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010311c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102125(void)

{
  return;
}




void FUN_00102130(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010234a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c35(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00101c8b(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101530(int *param_1)

{
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*param_1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*param_1 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101bb7(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_00101b5f("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020b7(void)

{
  return;
}




undefined8 FUN_0010228f(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101aaa(int *param_1)

{
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((*param_1 < 0) || (9 < *param_1)) {
    FUN_00101b5f("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)*param_1 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101bb7(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020f9(void)

{
  return;
}




undefined8 FUN_00102167(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102130,local_18);
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




void FUN_00101bdf(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102032(void)

{
  return 1;
}




void FUN_001016f4(int *param_1)

{
  long in_FS_OFFSET;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (*param_1 < 10) {
    *(undefined4 *)((long)&local_38 + (long)*param_1 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101bb7(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_00101b5f("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102080(void)

{
  return;
}




ulong FUN_00101f53(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103124,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



