
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




void FUN_001014bd(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(0xb);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001015f2(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_00101531(void)

{
  FUN_001014bd();
  return;
}




void FUN_001017eb(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d38(void)

{
  return;
}




void FUN_001019f0(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101793(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101ee6(undefined8 *param_1)

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




void FUN_00101ce0(void)

{
  return;
}




void FUN_00101cbf(void)

{
  return;
}




void FUN_00101d2d(void)

{
  return;
}




void FUN_00101fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f08)();
  return;
}




void FUN_001017b9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101c66(void)

{
  return 1;
}




undefined8 FUN_00101d9b(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d64,local_18);
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




void FUN_001015a6(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104ca0;
  return;
}




int FUN_00101c84(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d17(void)

{
  return;
}




void FUN_00101cf6(void)

{
  return;
}




void FUN_001019c2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101cca(void)

{
  return;
}




void FUN_00101f5f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101869(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d0c(void)

{
  return;
}




bool FUN_00101e68(pthread_t *param_1)

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




undefined8 FUN_00101541(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101793("Calling good()...");
  FUN_00101531();
  FUN_00101793("Finished good()");
  FUN_00101793("Calling bad()...");
  FUN_00101449();
  FUN_00101793("Finished bad()");
  return 0;
}




void FUN_0010183f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d4e(void)

{
  return;
}




void FUN_00101d43(void)

{
  return;
}




void FUN_00101f7e(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




void FUN_00101449(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new__(10);
  puVar2 = (undefined8 *)operator_new(8);
  FUN_001015c4(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_00101d64(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101cd5(void)

{
  return;
}




void FUN_00101d59(void)

{
  return;
}




void FUN_00101cb4(void)

{
  return;
}




void FUN_00101997(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001016da(undefined8 param_1,void *param_2)

{
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_30;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  for (local_30 = 0; local_30 < sVar1 + 1; local_30 = local_30 + 1) {
    *(char *)((long)param_2 + local_30) = local_1b[local_30];
  }
  FUN_00101793(param_2);
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00102040(void)

{
  return;
}




void FUN_0010196f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101a23(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101d01(void)

{
  return;
}




void FUN_001015c4(undefined8 *param_1)

{
  FUN_001015a6(param_1);
  *param_1 = &PTR_FUN_00104c88;
  return;
}




ulong FUN_00101a83(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103248,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101813(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015f2(undefined8 *param_1)

{
  FUN_001015a6(param_1);
  *param_1 = &PTR_FUN_00104c70;
  return;
}




void FUN_00101620(undefined8 param_1,void *param_2)

{
  size_t sVar1;
  long in_FS_OFFSET;
  ulong local_30;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  for (local_30 = 0; local_30 < sVar1 + 1; local_30 = local_30 + 1) {
    *(char *)((long)param_2 + local_30) = local_1b[local_30];
  }
  FUN_00101793(param_2);
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101894(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101b87(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103250,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d22(void)

{
  return;
}




void FUN_001018bf(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101ec3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101ca9(void)

{
  return;
}




undefined8 FUN_00101c75(void)

{
  return 0;
}




void FUN_00101f9d(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001018ea(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c9e(void)

{
  return;
}




void FUN_00101ceb(void)

{
  return;
}




void FUN_00101915(undefined4 param_1)

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



