
void FUN_001018bf(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void * FUN_0010148a(void *param_1)

{
  if (DAT_00105020 == 0) {
    memset(param_1,0x41,0x31);
    *(undefined *)((long)param_1 + 0x31) = 0;
  }
  else {
    FUN_00101813("Benign, fixed string");
  }
  return param_1;
}




void FUN_0010193f(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101cf5(void)

{
  return 0;
}




void FUN_00101d34(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101390();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_001019ef(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010186b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101dd9(void)

{
  return;
}




void FUN_00101d76(void)

{
  return;
}




bool FUN_00101ee8(pthread_t *param_1)

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




void FUN_00101813(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




ulong FUN_00101c07(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f66(undefined8 *param_1)

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




void * FUN_00101449(void *param_1)

{
  if (DAT_0010501c != 0) {
    memset(param_1,0x41,99);
    *(undefined *)((long)param_1 + 99) = 0;
  }
  return param_1;
}




void FUN_00101a17(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001015ef(void)

{
  void *pvVar1;
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar1 = operator_new__(100);
  DAT_00105020 = 0;
  __s = (char *)FUN_0010148a(pvVar1);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00101813(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018e9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d1e(void)

{
  return;
}




int FUN_00101d04(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016c4(void)

{
  void *pvVar1;
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar1 = operator_new__(100);
  DAT_00105024 = 1;
  __s = (char *)FUN_001014d9(pvVar1);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00101813(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010196a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010151a(void)

{
  void *pvVar1;
  char *__s;
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar1 = operator_new__(100);
  DAT_0010501c = 1;
  __s = (char *)FUN_00101449(pvVar1);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen(__s);
  memcpy(&local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00101813(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101ce6(void)

{
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101dad(void)

{
  return;
}




void FUN_00101914(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101893(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d55(void)

{
  return;
}




void FUN_00101d3f(void)

{
  return;
}




void FUN_00101d4a(void)

{
  return;
}




void FUN_00101dc3(void)

{
  return;
}




void FUN_00101da2(void)

{
  return;
}




void FUN_00101995(undefined4 param_1)

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




void FUN_00101dce(void)

{
  return;
}




void * FUN_001014d9(void *param_1)

{
  if (DAT_00105024 != 0) {
    memset(param_1,0x41,0x31);
    *(undefined *)((long)param_1 + 0x31) = 0;
  }
  return param_1;
}




void FUN_00101d29(void)

{
  return;
}




void FUN_00101d8c(void)

{
  return;
}




void FUN_00101d81(void)

{
  return;
}




void FUN_00101aa3(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101db8(void)

{
  return;
}




void FUN_001020c0(void)

{
  return;
}




void FUN_00102050(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ffe(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101f43(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101839(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101e1b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101de4,local_18);
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




undefined8 FUN_001017ae(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101813("Calling good()...");
  FUN_00101799();
  FUN_00101813("Finished good()");
  FUN_00101813("Calling bad()...");
  FUN_0010151a();
  FUN_00101813("Finished bad()");
  return 0;
}




void FUN_00101d97(void)

{
  return;
}




void FUN_00101de4(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d60(void)

{
  return;
}




void FUN_00101fdf(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010201d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101799(void)

{
  FUN_001015ef();
  FUN_001016c4();
  return;
}




void FUN_00101a70(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_00101b03(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d6b(void)

{
  return;
}



