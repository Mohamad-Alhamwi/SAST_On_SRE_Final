
void FUN_00101648(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001016c8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ac8(void)

{
  return;
}




void FUN_00101b4c(void)

{
  return;
}




void FUN_00101b62(void)

{
  return;
}




void FUN_0010182c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




undefined8 FUN_00101ba4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101b6d,local_18);
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




int FUN_00101a8d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b2b(void)

{
  return;
}




void FUN_00101463(void)

{
  FUN_00101562(0);
  return;
}




void FUN_001017a0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010149f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010159c("Calling good()...");
  FUN_0010148a();
  FUN_0010159c("Finished good()");
  FUN_0010159c("Calling bad()...");
  FUN_001013e9();
  FUN_0010159c("Finished bad()");
  return 0;
}




undefined8 FUN_00101a7e(void)

{
  return 0;
}




undefined8 FUN_00101ccc(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001016f3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101330();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101778(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ad3(void)

{
  return;
}




void FUN_00101aff(void)

{
  return;
}




void FUN_00101aa7(void)

{
  return;
}




ulong FUN_00101990(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101abd(void)

{
  return;
}




void * FUN_00101504(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  return pvVar1;
}




void FUN_00101da6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b15(void)

{
  return;
}




undefined8 FUN_00101cef(undefined8 *param_1)

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




bool FUN_00101c71(pthread_t *param_1)

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




void FUN_0010171e(undefined4 param_1)

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




void * FUN_00101562(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  return pvVar1;
}




void FUN_00101b6d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001015f4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001017cb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010159c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b36(void)

{
  return;
}




void FUN_00101d87(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_001013e9(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00101504(0);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101b57(void)

{
  return;
}




ulong FUN_0010188c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b0a(void)

{
  return;
}




void FUN_00101af4(void)

{
  return;
}




void FUN_00101b41(void)

{
  return;
}




void FUN_0010169d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015c2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void * FUN_0010153e(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
  return pvVar1;
}




void FUN_00101426(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_0010153e(0);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_0010161c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ab2(void)

{
  return;
}




void FUN_00101ae9(void)

{
  return;
}




void FUN_00101ade(void)

{
  return;
}




void FUN_00101b20(void)

{
  return;
}




void FUN_00101d68(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101a6f(void)

{
  return 1;
}




void FUN_001017f9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e50(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_0010148a(void)

{
  FUN_00101426();
  FUN_00101463();
  return;
}




void FUN_00101672(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



