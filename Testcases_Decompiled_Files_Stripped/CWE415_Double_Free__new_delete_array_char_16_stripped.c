
void FUN_00101a2f(void)

{
  return;
}




void FUN_00101a50(void)

{
  return;
}




undefined8 FUN_00101b2c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101af5,local_18);
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




void FUN_00101a9d(void)

{
  return;
}




void FUN_0010157c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ad4(void)

{
  return;
}




void FUN_001016a6(undefined4 param_1)

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




void FUN_00101a7c(void)

{
  return;
}




void FUN_00101728(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ac9(void)

{
  return;
}




void FUN_001013e9(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101436(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f20)();
  return;
}




void FUN_00101a5b(void)

{
  return;
}




void FUN_00101625(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a71(void)

{
  return;
}




bool FUN_00101bf9(pthread_t *param_1)

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




void FUN_00101d0f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101adf(void)

{
  return;
}




void FUN_00101ab3(void)

{
  return;
}




void FUN_00101af5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101753(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001015a4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




void FUN_001014aa(void)

{
  FUN_00101436();
  FUN_00101470();
  return;
}




void FUN_00101d60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a66(void)

{
  return;
}




ulong FUN_00101814(long param_1,ulong param_2,long param_3)

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




void FUN_001017b4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




undefined8 FUN_00101a06(void)

{
  return 0;
}




void FUN_00101a87(void)

{
  return;
}




ulong FUN_00101918(long param_1,ulong param_2,long param_3)

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




void FUN_00101a3a(void)

{
  return;
}




void FUN_001015d0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101650(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101aa8(void)

{
  return;
}




void FUN_00101d2e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cf0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010154a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a45(void)

{
  return;
}




void FUN_00101781(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010167b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_00101a15(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
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




void FUN_00101524(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101aea(void)

{
  return;
}




undefined8 FUN_00101c77(undefined8 *param_1)

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




undefined8 FUN_00101c54(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101dd0(void)

{
  return;
}




void FUN_00101abe(void)

{
  return;
}




void FUN_00101a92(void)

{
  return;
}




void FUN_001015fa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101700(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001019f7(void)

{
  return 1;
}




undefined8 FUN_001014bf(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101524("Calling good()...");
  FUN_001014aa();
  FUN_00101524("Finished good()");
  FUN_00101524("Calling bad()...");
  FUN_001013e9();
  FUN_00101524("Finished bad()");
  return 0;
}




void FUN_00101470(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(100);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}



