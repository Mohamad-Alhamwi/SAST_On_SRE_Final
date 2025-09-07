
bool FUN_00101f9c(pthread_t *param_1)

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




void FUN_00102100(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010158c(void)

{
  long in_FS_OFFSET;
  undefined **local_20;
  undefined ***local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &PTR_FUN_00105c68;
  local_18 = &local_20;
  (*(code *)PTR_FUN_00105c68)(local_18,7);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e14(void)

{
  return;
}




void FUN_0010199d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010140a(undefined8 param_1,int param_2)

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
  if (param_2 < 0) {
    FUN_001018c7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_0010191f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101e6c(void)

{
  return;
}




undefined8 FUN_00101da9(void)

{
  return 0;
}




ulong FUN_00101bb7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103320,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e09(void)

{
  return;
}




void FUN_00101e98(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a49(undefined4 param_1)

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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014d4(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_34;
  undefined **local_30;
  undefined ***local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = -1;
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar1 = fgets(local_1e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001018c7("fgets() failed.");
  }
  else {
    local_34 = atoi(local_1e);
  }
  local_30 = &PTR_FUN_00105c80;
  local_28 = &local_30;
  (*(code *)PTR_FUN_00105c80)(local_28,local_34);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102170(void)

{
  return;
}




void FUN_00101e4b(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f18)();
  return;
}




void FUN_00101acb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101df3(void)

{
  return;
}




void FUN_00101dd2(void)

{
  return;
}




void FUN_00101973(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101cbb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103328,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e77(void)

{
  return;
}




undefined8 FUN_001016c4(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001018c7("Calling good()...");
  FUN_001016af();
  FUN_001018c7("Finished good()");
  FUN_001018c7("Calling bad()...");
  FUN_001014d4();
  FUN_001018c7("Finished bad()");
  return 0;
}




void FUN_00101de8(void)

{
  return;
}




undefined8 FUN_0010201a(undefined8 *param_1)

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




void FUN_001020b2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101e56(void)

{
  return;
}




void FUN_001016af(void)

{
  FUN_0010158c();
  FUN_001015f7();
  return;
}




void FUN_00101e2a(void)

{
  return;
}




void FUN_00101e1f(void)

{
  return;
}




void FUN_001020d1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e82(void)

{
  return;
}




void FUN_00102093(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e40(void)

{
  return;
}




undefined8 FUN_00101d9a(void)

{
  return 1;
}




void FUN_00101e35(void)

{
  return;
}




void FUN_00101b57(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101947(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101350();
    DAT_00106028 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101ecf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e98,local_18);
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




void FUN_0010191f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001019c8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ddd(void)

{
  return;
}




undefined8 FUN_00101ff7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019f3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001015f7(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_34;
  undefined **local_30;
  undefined ***local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = -1;
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar1 = fgets(local_1e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001018c7("fgets() failed.");
  }
  else {
    local_34 = atoi(local_1e);
  }
  local_30 = &PTR_FUN_00105c98;
  local_28 = &local_30;
  (*(code *)PTR_FUN_00105c98)(local_28,local_34);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_0010172a(undefined8 param_1,int param_2)

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
  if (param_2 < 0) {
    FUN_001018c7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_0010191f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101a1e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101dfe(void)

{
  return;
}




void FUN_001017f4(undefined8 param_1,int param_2)

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
  if ((param_2 < 0) || (9 < param_2)) {
    FUN_001018c7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)param_2 * 4) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_0010191f(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101e61(void)

{
  return;
}




void FUN_00101b24(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101aa3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e8d(void)

{
  return;
}




void FUN_001018c7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101af6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




int FUN_00101db8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001018ed(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}



